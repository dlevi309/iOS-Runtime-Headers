/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Categories.framework/Categories
*/


@class NSString, NSArray;

@interface CTCategories : NSObject {

	NSString* _indexVersionId;

}

@property (copy,readonly) NSArray * availableCategoryIDs; 
+(void)initialize;
+(id)sharedCategories;
+(id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(long long)currentIOSDevice;
+(id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(id)systemUnblockableBundleIdentifiers;
+(id)systemBlockableBundleIdentifiers;
+(id)systemHiddenBundleIdentifiers;
+(id)systemBundleIdentifiers;
-(id)init;
-(void)dealloc;
-(void)categoryForDomainURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)availableCategoryIDs;
-(void)categoriesForDomainURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_emptySharedCache:(id)arg1 ;
-(void)categoriesForBundleIDs:(id)arg1 platform:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)categoriesForDomainNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 platform:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unCategorizedDomainsFromDomains:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoryForDomainURL:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoryForDomainURL:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForDomainNames:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForDomainNames:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForDomainURLs:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForDomainURLs:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
@end

