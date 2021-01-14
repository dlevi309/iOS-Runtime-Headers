/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMVisionEngine.h>

@class AXMScreenCaptureNode, AXMImageNode, AXMTextDetectorNode, AXMIconClassDetectorNode, AXMAXElementDetectorNode;

@interface AXMAXElementVisionEngine : AXMVisionEngine {

	AXMScreenCaptureNode* _captureNode;
	AXMImageNode* _imageNode;
	AXMTextDetectorNode* _textDetector;
	AXMIconClassDetectorNode* _iconClassDetector;
	AXMAXElementDetectorNode* _axElementDetector;

}

@property (assign,nonatomic,__weak) AXMScreenCaptureNode * captureNode;                        //@synthesize captureNode=_captureNode - In the implementation block
@property (assign,nonatomic,__weak) AXMImageNode * imageNode;                                  //@synthesize imageNode=_imageNode - In the implementation block
@property (assign,nonatomic,__weak) AXMTextDetectorNode * textDetector;                        //@synthesize textDetector=_textDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMIconClassDetectorNode * iconClassDetector;              //@synthesize iconClassDetector=_iconClassDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMAXElementDetectorNode * axElementDetector;              //@synthesize axElementDetector=_axElementDetector - In the implementation block
-(AXMTextDetectorNode *)textDetector;
-(AXMImageNode *)imageNode;
-(void)setImageNode:(AXMImageNode *)arg1 ;
-(void)setIconClassDetector:(AXMIconClassDetectorNode *)arg1 ;
-(AXMIconClassDetectorNode *)iconClassDetector;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setCaptureNode:(AXMScreenCaptureNode *)arg1 ;
-(void)setTextDetector:(AXMTextDetectorNode *)arg1 ;
-(void)setAxElementDetector:(AXMAXElementDetectorNode *)arg1 ;
-(AXMScreenCaptureNode *)captureNode;
-(AXMAXElementDetectorNode *)axElementDetector;
@end

