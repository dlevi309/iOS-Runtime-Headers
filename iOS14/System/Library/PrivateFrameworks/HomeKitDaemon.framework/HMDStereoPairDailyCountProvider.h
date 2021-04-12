/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDLogEventDailyProvider.h>

@protocol HMDStereoPairDailyCountProviderContext;
@class NSArray, NSString;

@interface HMDStereoPairDailyCountProvider : NSObject <HMDLogEventDailyProvider> {

	id<HMDStereoPairDailyCountProviderContext> _context;

}

@property (readonly) id<HMDStereoPairDailyCountProviderContext> context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * logEventProviderDailySubmissionBlocks; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(id<HMDStereoPairDailyCountProviderContext>)context;
-(NSArray *)logEventProviderDailySubmissionBlocks;
-(unsigned long long)smallHomePodPairCount;
-(void)submitLogEvent;
@end

