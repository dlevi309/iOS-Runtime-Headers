/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface UIContentSizeCategoryPreference : NSObject {

	NSString* _preferredContentSizeCategory;
	NSString* _preferredContentSizeCategoryCarPlay;

}

@property (nonatomic,retain) NSString * preferredContentSizeCategory;                     //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (nonatomic,retain) NSString * preferredContentSizeCategoryCarPlay;              //@synthesize preferredContentSizeCategoryCarPlay=_preferredContentSizeCategoryCarPlay - In the implementation block
+(id)system;
+(void)overrideSystemWithPreference:(id)arg1 ;
+(void)overrideSystemWithPreference:(id)arg1 forBlock:(/*^block*/id)arg2 ;
+(void)_populateUserDefaultsContentSizeCategory:(id*)arg1 carPlay:(id*)arg2 ;
+(void)resetSystemPreferenceOverride;
+(void)_resetSystemPreferenceOverride;
+(void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 ;
+(void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 forBlock:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)preferredContentSizeCategory;
-(NSString *)preferredContentSizeCategoryCarPlay;
-(void)checkForChanges;
-(id)initWithContentSizeCategory:(id)arg1 ;
-(id)initWithContentSizeCategory:(id)arg1 carPlay:(id)arg2 ;
-(id)initWithRawUserDefaults;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)setPreferredContentSizeCategoryCarPlay:(NSString *)arg1 ;
@end

