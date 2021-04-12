/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSArray, NSURL, NSMutableData;

@interface HMICameraVideoFragment : NSObject <NSSecureCoding> {

	unsigned long long _sequenceNumber;
	NSData* _data;
	NSData* _moovFragment;
	long long _eventTypes;
	NSArray* _activityZones;
	NSURL* _url;
	SCD_Struct_HM3 _sessionPresentationTime;

}

@property (readonly) NSMutableData * fragmentData; 
@property (nonatomic,retain) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (assign) SCD_Struct_HM3 sessionPresentationTime;              //@synthesize sessionPresentationTime=_sessionPresentationTime - In the implementation block
@property (readonly) unsigned long long sequenceNumber;                 //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (readonly) NSData * data;                                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSData * moovFragment;                   //@synthesize moovFragment=_moovFragment - In the implementation block
@property (readonly) long long eventTypes;                              //@synthesize eventTypes=_eventTypes - In the implementation block
@property (readonly) NSArray * activityZones;                           //@synthesize activityZones=_activityZones - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)sequenceNumber;
-(NSURL *)url;
-(id)description;
-(NSData *)data;
-(void)setUrl:(NSURL *)arg1 ;
-(NSArray *)activityZones;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)eventTypes;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSequenceNumber:(unsigned long long)arg1 data:(id)arg2 moovFragment:(id)arg3 eventTypes:(long long)arg4 activityZones:(id)arg5 ;
-(NSData *)moovFragment;
-(SCD_Struct_HM3)sessionPresentationTime;
-(void)setSessionPresentationTime:(SCD_Struct_HM3)arg1 ;
-(id)initWithSequenceNumber:(unsigned long long)arg1 data:(id)arg2 moovFragment:(id)arg3 ;
-(id)initWithSequenceNumber:(unsigned long long)arg1 data:(id)arg2 moovFragment:(id)arg3 eventTypes:(long long)arg4 ;
-(id)initWithSequenceNumber:(unsigned long long)arg1 fragmentData:(id)arg2 eventTypes:(long long)arg3 ;
-(id)initWithSequenceNumber:(unsigned long long)arg1 fragmentData:(id)arg2 eventTypes:(long long)arg3 activityZones:(id)arg4 url:(id)arg5 ;
-(NSMutableData *)fragmentData;
@end

