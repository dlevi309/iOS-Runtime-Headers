/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPreparedImage:(UIImage *)arg1 ;
-(void)setExternalFlashLayerRenderID:(unsigned long long)arg1 ;
-(void)setExternalFlashLayerContextID:(unsigned)arg1 ;
-(UIImage *)preparedImage;
-(unsigned long long)externalFlashLayerRenderID;
-(unsigned)externalFlashLayerContextID;
@end

