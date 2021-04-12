/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@class UIImage;

@interface SSScreenCapturerScreenshotOptions : NSObject {

	unsigned _externalFlashLayerContextID;
	UIImage* _preparedImage;
	unsigned long long _externalFlashLayerRenderID;

}

@property (nonatomic,retain) UIImage * preparedImage;                                    //@synthesize preparedImage=_preparedImage - In the implementation block
@property (assign,nonatomic) unsigned long long externalFlashLayerRenderID;              //@synthesize externalFlashLayerRenderID=_externalFlashLayerRenderID - In the implementation block
@property (assign,nonatomic) unsigned externalFlashLayerContextID;                       //@synthesize externalFlashLayerContextID=_externalFlashLayerContextID - In the implementation block
-(UIImage *)preparedImage;
-(void)setPreparedImage:(UIImage *)arg1 ;
-(unsigned long long)externalFlashLayerRenderID;
-(void)setExternalFlashLayerRenderID:(unsigned long long)arg1 ;
-(unsigned)externalFlashLayerContextID;
-(void)setExternalFlashLayerContextID:(unsigned)arg1 ;
@end

