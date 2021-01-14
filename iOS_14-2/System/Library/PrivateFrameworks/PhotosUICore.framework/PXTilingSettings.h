/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXTilingSettings : PXSettings {

	BOOL _flipLayoutsHorizontally;

}

@property (assign,nonatomic) BOOL flipLayoutsHorizontally;              //@synthesize flipLayoutsHorizontally=_flipLayoutsHorizontally - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(BOOL)flipLayoutsHorizontally;
-(void)setFlipLayoutsHorizontally:(BOOL)arg1 ;
@end

