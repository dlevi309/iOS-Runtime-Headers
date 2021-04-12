/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)count;
-(void)setCount:(NSNumber *)arg1 ;
-(id<HSIOReporting>)channel;
-(HSIORChannelDescription *)channelDescription;
-(void)setChannelDescription:(HSIORChannelDescription *)arg1 ;
-(BOOL)isEqualToSample:(id)arg1 ;
-(id)initWithIOReportSampleRef:(CFDictionaryRef)arg1 ;
@end

