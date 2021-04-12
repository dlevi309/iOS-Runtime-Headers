/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary;

@interface PKTransitCommutePlanPackage : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _transitCommutePlans;
	unsigned long long _transitCommutePlanType;
	NSMutableDictionary* _commutePlanLookupDictionary;

}

@property (nonatomic,copy) NSArray * transitCommutePlans;                                    //@synthesize transitCommutePlans=_transitCommutePlans - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commutePlanLookupDictionary;              //@synthesize commutePlanLookupDictionary=_commutePlanLookupDictionary - In the implementation block
@property (assign,nonatomic) unsigned long long transitCommutePlanType;                      //@synthesize transitCommutePlanType=_transitCommutePlanType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)transitCommutePlanType;
-(NSArray *)transitCommutePlans;
-(void)setTransitCommutePlanType:(unsigned long long)arg1 ;
-(void)setTransitCommutePlans:(NSArray *)arg1 ;
-(void)setCommutePlanLookupDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 backFieldBuckets:(id)arg2 bundle:(id)arg3 privateBundle:(id)arg4 ;
-(id)planForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)commutePlanLookupDictionary;
@end

