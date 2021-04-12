/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(NSString *)resourceName;
-(NSArray *)searchBundles;
-(id)initWithResourceName:(id)arg1 searchBundles:(id)arg2 ;
@end

