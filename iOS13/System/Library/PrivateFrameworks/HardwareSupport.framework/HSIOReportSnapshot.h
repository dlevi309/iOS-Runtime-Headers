/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)samples;
-(void)setSamples:(NSArray *)arg1 ;
-(BOOL)isEqualToSnapshot:(id)arg1 ;
-(id)reportWithOnlySimpleChannels;
-(id)snapshotWithBaseline:(id)arg1 error:(id*)arg2 ;
-(id)snapshotByFilteringSamples:(/*^block*/id)arg1 ;
@end

