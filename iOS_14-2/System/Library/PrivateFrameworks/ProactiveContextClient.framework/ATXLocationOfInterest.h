/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <ProactiveContextClient/ProactiveContextClient-Structs.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSArray;

@interface ATXLocationOfInterest : NSObject <ATXProtoBufWrapper, NSSecureCoding, NSCopying> {

	NSUUID* _uuid;
	NSArray* _visits;
	long long _type;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSArray * visits;                               //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(id)proto;
-(id)encodeAsProto;
-(long long)_routineLOITypeFromProtoLOIType:(int)arg1 ;
-(int)_protoLOITypeFromRoutineLOIType:(long long)arg1 ;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(NSUUID *)uuid;
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(NSArray *)visits;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 visits:(id)arg2 coordinate:(CLLocationCoordinate2D)arg3 type:(long long)arg4 ;
-(id)initWithUUID:(id)arg1 visits:(id)arg2 coordinate:(CLLocationCoordinate2D)arg3 ;
-(void)addVisitFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
@end

