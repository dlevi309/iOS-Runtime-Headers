/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/ASDPersistentRequest.h>

@class NSString, NSNumber;

@interface ASDSystemAppRequest : ASDPersistentRequest {

	BOOL _userInitiated;
	NSString* _bundleID;
	NSNumber* _storeItemID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemID;                                   //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign,getter=isUserInitiated,nonatomic) BOOL userInitiated;              //@synthesize userInitiated=_userInitiated - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(NSNumber *)storeItemID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(id)description;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isUserInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
@end

