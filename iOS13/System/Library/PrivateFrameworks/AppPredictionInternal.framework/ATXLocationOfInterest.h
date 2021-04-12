/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray;

@interface ATXLocationOfInterest : NSObject <NSSecureCoding> {

	NSUUID* _uuid;
	NSArray* _visits;
	long long _type;

}

@property (nonatomic,readonly) NSUUID * uuid;                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSArray * visits;              //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) long long type;                //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSArray *)visits;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(id)initWithUUID:(id)arg1 visits:(id)arg2 type:(long long)arg3 ;
-(id)initWithUUID:(id)arg1 visits:(id)arg2 ;
-(void)addVisitFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
@end

