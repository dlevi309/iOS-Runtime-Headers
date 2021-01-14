/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface HMDCameraRecordingGeneralConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSNumber* _prebufferLength;
	unsigned long long _eventTriggerOptions;
	NSArray* _mediaContainerConfigurations;

}

@property (nonatomic,copy,readonly) NSNumber * prebufferLength;                          //@synthesize prebufferLength=_prebufferLength - In the implementation block
@property (nonatomic,readonly) unsigned long long eventTriggerOptions;                   //@synthesize eventTriggerOptions=_eventTriggerOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaContainerConfigurations;              //@synthesize mediaContainerConfigurations=_mediaContainerConfigurations - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(NSNumber *)prebufferLength;
-(unsigned long long)eventTriggerOptions;
-(NSArray *)mediaContainerConfigurations;
-(id)initWithPrebufferLength:(id)arg1 eventTriggerOptions:(unsigned long long)arg2 mediaContainerConfigurations:(id)arg3 ;
@end

