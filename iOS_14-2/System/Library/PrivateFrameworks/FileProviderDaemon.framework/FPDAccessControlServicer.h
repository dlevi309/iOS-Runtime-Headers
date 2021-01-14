/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/FPDAccessControlServicing.h>

@class FPDAccessControlStore;

@interface FPDAccessControlServicer : NSObject <FPDAccessControlServicing> {

	FPDAccessControlStore* _accessStore;

}

@property (assign,nonatomic,__weak) FPDAccessControlStore * accessStore;              //@synthesize accessStore=_accessStore - In the implementation block
-(void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(/*^block*/id)arg1 ;
-(void)revokeAccessToAllItemsForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAccessStore:(id)arg1 ;
-(FPDAccessControlStore *)accessStore;
-(void)setAccessStore:(FPDAccessControlStore *)arg1 ;
@end

