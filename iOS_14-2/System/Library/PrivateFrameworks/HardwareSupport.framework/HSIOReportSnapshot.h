/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/

#import <HardwareSupport/HSIOReport.h>

@class NSArray;

@interface HSIOReportSnapshot : HSIOReport {

	NSArray* _samples;

}

@property (nonatomic,retain) NSArray * samples;              //@synthesize samples=_samples - In the implementation block
+(id)report:(id*)arg1 ;
+(id)reportWithOnlySimpleChannels:(id*)arg1 ;
+(id)snapshotReport:(id)arg1 error:(id*)arg2 ;
-(NSArray *)samples;
-(void)setSamples:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqualToSnapshot:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)reportWithOnlySimpleChannels;
-(id)snapshotWithBaseline:(id)arg1 error:(id*)arg2 ;
-(id)snapshotByFilteringSamples:(/*^block*/id)arg1 ;
@end

