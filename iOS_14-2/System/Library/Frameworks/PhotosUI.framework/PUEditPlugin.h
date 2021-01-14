/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class UIApplicationExtensionActivity, NSExtension, UIImage, NSString;

@interface PUEditPlugin : NSObject {

	UIApplicationExtensionActivity* __applicationExtensionActivity;
	unsigned long long _category;
	NSExtension* _extension;

}

@property (nonatomic,readonly) UIApplicationExtensionActivity * _applicationExtensionActivity;              //@synthesize _applicationExtensionActivity=__applicationExtensionActivity - In the implementation block
@property (assign,nonatomic) unsigned long long category;                                                   //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                                                     //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) UIImage * smallIcon; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) UIImage * icon; 
-(void)setCategory:(unsigned long long)arg1 ;
-(UIImage *)icon;
-(unsigned long long)category;
-(UIImage *)smallIcon;
-(id)initWithExtension:(id)arg1 pluginCategoryType:(unsigned long long)arg2 ;
-(UIApplicationExtensionActivity *)_applicationExtensionActivity;
-(NSExtension *)extension;
-(unsigned long long)hash;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

