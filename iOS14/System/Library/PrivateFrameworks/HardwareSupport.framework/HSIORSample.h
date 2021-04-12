/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <libobjc.A.dylib/HSIOSimpleReporting.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HSIORChannelDescription, NSNumber, NSString;

@interface HSIORSample : NSObject <HSIOSimpleReporting, NSCopying> {

	HSIORChannelDescription* _channelDescription;
	NSNumber* _count;

}

@property (nonatomic,retain) HSIORChannelDescription * channelDescription;              //@synthesize channelDescription=_channelDescription - In the implementation block
@property (nonatomic,retain) NSNumber * count;                                          //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) id<HSIOReporting> channel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCount:(NSNumber *)arg1 ;
-(NSNumber *)count;
-(id<HSIOReporting>)channel;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HSIORChannelDescription *)channelDescription;
-(void)setChannelDescription:(HSIORChannelDescription *)arg1 ;
-(BOOL)isEqualToSample:(id)arg1 ;
-(id)initWithIOReportSampleRef:(CFDictionaryRef)arg1 ;
@end

