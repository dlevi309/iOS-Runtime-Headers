/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSURL, NSMutableData;

@interface HMICameraVideoFragment : NSObject <NSSecureCoding> {

	unsigned long long _sequenceNumber;
	NSData* _data;
	NSData* _moovFragment;
	long long _eventTypes;
	NSURL* _url;

}

@property (readonly) NSMutableData * fragmentData; 
@property (nonatomic,retain) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSData * moovFragment;                //@synthesize moovFragment=_moovFragment - In the implementation block
@property (readonly) long long eventTypes;                           //@synthesize eventTypes=_eventTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSURL *)url;
-(unsigned long long)sequenceNumber;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithSequenceNumber:(unsigned long long)arg1 data:(id)arg2 moovFragment:(id)arg3 eventTypes:(long long)arg4 ;
-(NSData *)moovFragment;
-(id)initWithSequenceNumber:(unsigned long long)arg1 data:(id)arg2 moovFragment:(id)arg3 ;
-(id)initWithSequenceNumber:(unsigned long long)arg1 fragmentData:(id)arg2 eventTypes:(long long)arg3 ;
-(id)initWithSequenceNumber:(unsigned long long)arg1 fragmentData:(id)arg2 eventTypes:(long long)arg3 url:(id)arg4 ;
-(NSMutableData *)fragmentData;
-(long long)eventTypes;
@end

