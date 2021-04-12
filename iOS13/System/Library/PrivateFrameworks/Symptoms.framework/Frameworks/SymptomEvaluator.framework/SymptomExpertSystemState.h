/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/ExpertSystemStateCore.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface SymptomExpertSystemState : ExpertSystemStateCore {

	NSObject*<OS_dispatch_source> _strobe;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> strobe;              //@synthesize strobe=_strobe - In the implementation block
+(id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3 ;
-(NSObject*<OS_dispatch_source>)strobe;
-(void)setStrobe:(NSObject*<OS_dispatch_source>)arg1 ;
@end

