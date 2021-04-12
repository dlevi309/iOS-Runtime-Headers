/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WatchListKit-Structs.h>
#import <libobjc.A.dylib/WLKInstallable.h>

@class NSString, NSArray, NSURL, SSLookupItem;

@interface WLKLookupBasedInstallable : NSObject <WLKInstallable> {

	SSLookupItem* _item;

}

@property (nonatomic,readonly) SSLookupItem * item;                      //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * appBundleIDs; 
@property (nonatomic,copy,readonly) NSArray * appAdamIDs; 
@property (nonatomic,copy,readonly) NSURL * appStoreURL; 
-(id)init;
-(NSString *)name;
-(SSLookupItem *)item;
-(id)initWithLookupItem:(id)arg1 ;
-(NSURL *)appStoreURL;
-(NSArray *)appAdamIDs;
-(NSArray *)appBundleIDs;
-(id)appIconURLForSize:(CGSize)arg1 ;
@end

