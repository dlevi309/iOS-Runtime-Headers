/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WatchListKit-Structs.h>
#import <libobjc.A.dylib/WLKInstallable.h>

@class NSString, NSArray, NSURL, AMSLookupItem;

@interface WLKLookupBasedInstallable : NSObject <WLKInstallable> {

	AMSLookupItem* _item;

}

@property (nonatomic,readonly) AMSLookupItem * item;                     //@synthesize item=_item - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * appBundleIDs; 
@property (nonatomic,copy,readonly) NSArray * appAdamIDs; 
@property (nonatomic,copy,readonly) NSURL * appStoreURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AMSLookupItem *)item;
-(id)initWithLookupItem:(id)arg1 ;
-(NSString *)name;
-(NSArray *)appBundleIDs;
-(NSURL *)appStoreURL;
-(NSArray *)appAdamIDs;
-(id)appIconURLForSize:(CGSize)arg1 ;
@end

