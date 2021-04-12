/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSError;

@interface ASDJob : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleID;
	NSNumber* _externalOrderKey;
	NSError* _failureError;
	NSNumber* _orderKey;
	double _percentComplete;
	long long _persistentID;
	long long _phase;
	long long _purchaseID;
	long long _storeItemID;
	long long _type;

}

@property (nonatomic,copy) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * externalOrderKey;              //@synthesize externalOrderKey=_externalOrderKey - In the implementation block
@property (nonatomic,copy) NSError * failureError;                   //@synthesize failureError=_failureError - In the implementation block
@property (nonatomic,copy) NSNumber * orderKey;                      //@synthesize orderKey=_orderKey - In the implementation block
@property (assign,nonatomic) double percentComplete;                 //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) long long persistentID;                 //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) long long phase;                        //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) long long purchaseID;                   //@synthesize purchaseID=_purchaseID - In the implementation block
@property (assign,nonatomic) long long storeItemID;                  //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign,nonatomic) long long type;                         //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFailureError:(NSError *)arg1 ;
-(void)setStoreItemID:(long long)arg1 ;
-(long long)storeItemID;
-(void)setPurchaseID:(long long)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(id)initWithPersistentID:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSNumber *)externalOrderKey;
-(void)setOrderKey:(NSNumber *)arg1 ;
-(long long)purchaseID;
-(id)description;
-(void)setPercentComplete:(double)arg1 ;
-(NSNumber *)orderKey;
-(void)setExternalOrderKey:(NSNumber *)arg1 ;
-(double)percentComplete;
-(long long)persistentID;
-(NSString *)bundleID;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)failureError;
-(long long)phase;
-(void)setPhase:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

