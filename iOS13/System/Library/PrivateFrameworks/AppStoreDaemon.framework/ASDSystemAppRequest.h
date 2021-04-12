/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(void)setUserInitiated:(BOOL)arg1 ;
-(BOOL)isUserInitiated;
-(id)initWithBundleID:(id)arg1 ;
-(NSNumber *)storeItemID;
-(void)setStoreItemID:(NSNumber *)arg1 ;
@end

