/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AppStoreKit/ASKLoadResourceOperation.h>

@class NSString, NSArray;

@interface ASKLoadBundleResourceOperation : ASKLoadResourceOperation {

	NSString* _resourceName;
	NSArray* _searchBundles;

}

@property (nonatomic,copy,readonly) NSString * resourceName;              //@synthesize resourceName=_resourceName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchBundles;              //@synthesize searchBundles=_searchBundles - In the implementation block
-(NSString *)resourceName;
-(NSArray *)searchBundles;
-(void)main;
-(id)initWithResourceName:(id)arg1 searchBundles:(id)arg2 ;
@end

