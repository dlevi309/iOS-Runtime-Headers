/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_generateIdentifier;
-(id)addActivity:(id)arg1 ;
-(NSString *)storeCorrelationID;
-(id)initWithManifestType:(long long)arg1 ;
-(long long)manifestType;
-(void)setStoreCorrelationID:(NSString *)arg1 ;
-(void)addActivity:(id)arg1 withIdentifier:(id)arg2 ;
-(void)_addActivity:(id)arg1 withIdentifier:(id)arg2 persistentID:(id)arg3 ;
-(void)enumerateActivitiesUsingBlock:(/*^block*/id)arg1 ;
-(NSNumber *)purchaseID;
-(void)setPurchaseID:(NSNumber *)arg1 ;
@end

