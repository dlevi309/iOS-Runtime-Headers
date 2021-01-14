/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSPerSitePreferenceManager.h>

@protocol WBSPerSitePreferenceManager <NSObject>
@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerDelegate> delegate; 
@optional
-(BOOL)preferenceAppliesToHighLevelDomains:(id)arg1;
-(BOOL)preferenceOnlyShowsConfiguredSites:(id)arg1;
-(id)localizedWarningTextForPreference:(id)arg1;
-(void)getDomainsAllowedToRemoveForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2;

@required
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(id<WBSPerSitePreferenceManagerDelegate>)delegate;
-(id)preferences;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setDelegate:(id)arg1;
-(void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
-(id)valuesForPreference:(id)arg1;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end


@protocol WBSPerSitePreferenceManagerDelegate, WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate;
@class NSString;

@interface WBSPerSitePreferenceManager : NSObject <WBSPerSitePreferenceManager> {

	id<WBSPerSitePreferenceManagerDelegate> _delegate;
	id<WBSPerSitePreferenceManagerStorageDelegate> _storageDelegate;
	id<WBSPerSitePreferenceManagerDefaultsDelegate> _defaultsDelegate;

}

@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerStorageDelegate> storageDelegate;                //@synthesize storageDelegate=_storageDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerDefaultsDelegate> defaultsDelegate;              //@synthesize defaultsDelegate=_defaultsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id<WBSPerSitePreferenceManagerDelegate>)delegate;
-(id)preferences;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<WBSPerSitePreferenceManagerDelegate>)arg1 ;
-(void)setStorageDelegate:(id<WBSPerSitePreferenceManagerStorageDelegate>)arg1 ;
-(void)setDefaultsDelegate:(id<WBSPerSitePreferenceManagerDefaultsDelegate>)arg1 ;
-(void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id<WBSPerSitePreferenceManagerStorageDelegate>)storageDelegate;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(id)valuesForPreference:(id)arg1 ;
-(id)_validatePreferenceValue:(id)arg1 inPreference:(id)arg2 ;
-(void)_recursivelySetDefaultPreferenceValues:(id)arg1 orderedKeys:(id)arg2 currentIndex:(long long)arg3 existingResult:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id<WBSPerSitePreferenceManagerDefaultsDelegate>)defaultsDelegate;
-(void)setDefaultPreferenceValues:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

