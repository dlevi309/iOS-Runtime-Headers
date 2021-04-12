/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Categories.framework/Categories
*/


@class NSString, NSLock, NSArray;

@interface CTCategories : NSObject {

	NSString* _indexVersionId;
	NSLock* _lookupLock;

}

@property (copy,readonly) NSArray * availableCategoryIDs; 
+(void)initialize;
+(id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(long long)currentIOSDevice;
+(id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(id)systemUnblockableBundleIdentifiers;
+(id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(id)systemBlockableBundleIdentifiers;
+(id)supportedWebBrowserBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(id)systemHiddenBundleIdentifiers;
+(id)sharedCategories;
+(id)systemBundleIdentifiers;
-(void)categoryForBundleID:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(id)init;
-(void)categoryForBundleID:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForDomainNames:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForDomainURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 platform:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)categoriesForDomainURLs:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 platform:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)categoriesForBundleIDs:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)unCategorizedDomainsFromDomains:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)categoriesForDomainURLs:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoryForDomainURL:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoryForDomainURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForDomainNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoriesForDomainNames:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)_emptySharedCache:(id)arg1 ;
-(void)categoryForDomainURL:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSArray *)availableCategoryIDs;
-(void)categoryForDomainName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

