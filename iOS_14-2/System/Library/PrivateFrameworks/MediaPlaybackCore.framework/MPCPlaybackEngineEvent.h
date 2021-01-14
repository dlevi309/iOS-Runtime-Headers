/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSUUID, NSString, NSDictionary, NSDate;

@interface MPCPlaybackEngineEvent : NSObject {

	NSUUID* _identifier;
	NSString* _type;
	NSDictionary* _payload;
	unsigned long long _machAbsoluteTime;
	SCD_Struct_MP9 _monotonicTime;

}

@property (nonatomic,readonly) SCD_Struct_MP9 monotonicTime;                             //@synthesize monotonicTime=_monotonicTime - In the implementation block
@property (nonatomic,readonly) unsigned long long machAbsoluteTime;                      //@synthesize machAbsoluteTime=_machAbsoluteTime - In the implementation block
@property (nonatomic,readonly) unsigned long long monotonicTimeNanoSeconds; 
@property (nonatomic,copy,readonly) NSUUID * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * payload;                              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSDate * monotonicDate; 
-(NSDictionary *)payload;
-(id)description;
-(NSString *)type;
-(unsigned long long)hash;
-(NSDate *)date;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)monotonicDate;
-(double)durationSinceEvent:(id)arg1 ;
-(SCD_Struct_MP9)monotonicTime;
-(id)initWithType:(id)arg1 payload:(id)arg2 monotonicTime:(SCD_Struct_MP9)arg3 identifier:(id)arg4 ;
-(unsigned long long)monotonicTimeNanoSeconds;
-(unsigned long long)machAbsoluteTime;
@end

