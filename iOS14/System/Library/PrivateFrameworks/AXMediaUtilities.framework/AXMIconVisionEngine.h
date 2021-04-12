/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AXMImageNode *)imageNode;
-(void)setImageNode:(AXMImageNode *)arg1 ;
-(void)setIconClassDetector:(AXMIconClassDetectorNode *)arg1 ;
-(AXMIconClassDetectorNode *)iconClassDetector;
-(id)classifyImages:(id)arg1 withTimeout:(double)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

