/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventBinaryStepping.h>
#import <libobjc.A.dylib/BMEventTimeElapsing.h>
#import <libobjc.A.dylib/BMEventAppAssociating.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BMProtoBufWrapper.h>

@class NSString, NSDateInterval;

@interface BMAppLaunchEvent : BMEventBase <BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper> {

	NSString* _launchReason;
	unsigned long long _launchType;

}

@property (nonatomic,copy) NSString * launchReason;                        //@synthesize launchReason=_launchReason - In the implementation block
@property (assign,nonatomic) unsigned long long launchType;                //@synthesize launchType=_launchType - In the implementation block
@property (assign,getter=isStarting,nonatomic) BOOL starting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDateInterval * dateInterval; 
@property (assign,nonatomic) double absoluteTimestamp; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,readonly) unsigned dataVersion; 
+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(id)jsonDict;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(unsigned)dataVersion;
-(id)serialize;
-(id)json;
-(id)proto;
-(id)encodeAsProto;
-(void)setLaunchReason:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)launchType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStarting:(BOOL)arg1 bundleId:(id)arg2 absoluteTimeStamp:(double)arg3 launchReason:(id)arg4 launchType:(unsigned long long)arg5 ;
-(id)initWithStarting:(BOOL)arg1 bundleId:(id)arg2 absoluteTimeStamp:(double)arg3 duration:(double)arg4 launchReason:(id)arg5 launchType:(unsigned long long)arg6 ;
-(NSString *)launchReason;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLaunchType:(unsigned long long)arg1 ;
@end

