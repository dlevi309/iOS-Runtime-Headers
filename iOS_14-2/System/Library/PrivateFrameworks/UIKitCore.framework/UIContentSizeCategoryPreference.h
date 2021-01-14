/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface UIContentSizeCategoryPreference : NSObject {

	NSString* _preferredContentSizeCategory;
	NSString* _preferredContentSizeCategoryCarPlay;

}

@property (nonatomic,retain) NSString * preferredContentSizeCategory;                     //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (nonatomic,retain) NSString * preferredContentSizeCategoryCarPlay;              //@synthesize preferredContentSizeCategoryCarPlay=_preferredContentSizeCategoryCarPlay - In the implementation block
+(void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 forBlock:(/*^block*/id)arg2 ;
+(void)resetSystemPreferenceOverride;
+(void)_resetSystemPreferenceOverride;
+(void)asyncOverrideSystemWithPreference:(id)arg1 ;
+(void)overrideSystemWithPreference:(id)arg1 forBlock:(/*^block*/id)arg2 ;
+(void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 ;
+(void)overrideSystemWithPreference:(id)arg1 ;
+(void)_populateUserDefaultsContentSizeCategory:(id*)arg1 carPlay:(id*)arg2 ;
+(id)system;
+(void)asyncResetSystemPreferenceOverride;
-(id)init;
-(id)initWithRawUserDefaults;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(id)initWithContentSizeCategory:(id)arg1 carPlay:(id)arg2 ;
-(void)checkForChanges;
-(void)setPreferredContentSizeCategoryCarPlay:(NSString *)arg1 ;
-(NSString *)preferredContentSizeCategoryCarPlay;
-(id)description;
-(NSString *)preferredContentSizeCategory;
-(unsigned long long)hash;
-(id)initWithContentSizeCategory:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

