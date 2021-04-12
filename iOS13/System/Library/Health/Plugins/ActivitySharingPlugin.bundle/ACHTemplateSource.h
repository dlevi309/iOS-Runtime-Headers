/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

@class NSString;


@protocol ACHTemplateSource <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long runCadence; 
@property (assign,nonatomic,__weak) NSObject*<ACHTemplateSourceDelegate> delegate; 
@optional
-(NSObject*<ACHTemplateSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)templatesForDate:(id)arg1 databaseContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)customPlaceholderValuesForTemplate:(id)arg1;
-(id)textureFilenameForTemplate:(id)arg1;
-(long long)mobileAssetVersionForTemplate:(id)arg1;

@required
-(NSString *)identifier;
-(BOOL)sourceShouldRunForDate:(id)arg1;
-(void)templatesForDate:(id)arg1 completion:(/*^block*/id)arg2;
-(id)localizationBundleURLForTemplate:(id)arg1;
-(id)resourceBundleURLForTemplate:(id)arg1;
-(id)propertyListBundleURLForTemplate:(id)arg1;
-(id)stickerBundleURLForTemplate:(id)arg1;
-(long long)runCadence;

@end

