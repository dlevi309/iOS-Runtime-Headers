/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMVisionEngine.h>

@class AXMImageNode, AXMIconClassDetectorNode;

@interface AXMIconVisionEngine : AXMVisionEngine {

	AXMImageNode* _imageNode;
	AXMIconClassDetectorNode* _iconClassDetector;

}

@property (assign,nonatomic,__weak) AXMImageNode * imageNode;                                  //@synthesize imageNode=_imageNode - In the implementation block
@property (assign,nonatomic,__weak) AXMIconClassDetectorNode * iconClassDetector;              //@synthesize iconClassDetector=_iconClassDetector - In the implementation block
+(id)sharedInstance;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setImageNode:(AXMImageNode *)arg1 ;
-(void)setIconClassDetector:(AXMIconClassDetectorNode *)arg1 ;
-(AXMImageNode *)imageNode;
-(id)classifyImages:(id)arg1 withTimeout:(double)arg2 ;
-(AXMIconClassDetectorNode *)iconClassDetector;
@end

