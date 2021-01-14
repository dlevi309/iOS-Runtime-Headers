/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSNumber, NSString;

@interface ASDJobManifest : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _activities;
	long long _manifestType;
	NSNumber* _purchaseID;
	NSString* _storeCorrelationID;

}

@property (nonatomic,readonly) long long manifestType;                 //@synthesize manifestType=_manifestType - In the implementation block
@property (nonatomic,copy) NSNumber * purchaseID;                      //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * storeCorrelationID;              //@synthesize storeCorrelationID=_storeCorrelationID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPurchaseID:(NSNumber *)arg1 ;
-(id)init;
-(id)addActivity:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)setStoreCorrelationID:(NSString *)arg1 ;
-(NSNumber *)purchaseID;
-(id)initWithManifestType:(long long)arg1 ;
-(long long)manifestType;
-(id)description;
-(void)addActivity:(id)arg1 withIdentifier:(id)arg2 ;
-(id)_generateIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)storeCorrelationID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_addActivity:(id)arg1 withIdentifier:(id)arg2 persistentID:(id)arg3 ;
-(void)enumerateActivitiesUsingBlock:(/*^block*/id)arg1 ;
@end

