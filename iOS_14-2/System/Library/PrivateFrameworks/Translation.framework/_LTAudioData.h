/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


#import <Translation/Translation-Structs.h>
@class NSData;

@interface _LTAudioData : NSObject {

	AudioStreamBasicDescription _asbd;
	NSData* _data;
	long long _packetCount;
	NSData* _packetDescriptions;
	NSData* _rawData;

}

@property (nonatomic,readonly) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
@property (nonatomic,readonly) NSData * rawData;                              //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,readonly) long long packetCount;                         //@synthesize packetCount=_packetCount - In the implementation block
@property (nonatomic,readonly) NSData * packetDescriptions;                   //@synthesize packetDescriptions=_packetDescriptions - In the implementation block
-(AudioStreamBasicDescription)asbd;
-(long long)packetCount;
-(NSData *)rawData;
-(NSData *)packetDescriptions;
-(void)writeToURL:(id)arg1 ;
-(id)initWithASBD:(AudioStreamBasicDescription)arg1 rawData:(id)arg2 ;
-(BOOL)_populateWithOpusData:(id)arg1 ;
@end

