/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface ATXNotificationsSuggestionLROutput : NSObject <MLFeatureProvider> {

	long long _wantTurnOff;
	NSDictionary* _turnOffProbability;

}

@property (assign,nonatomic) long long wantTurnOff;                          //@synthesize wantTurnOff=_wantTurnOff - In the implementation block
@property (nonatomic,retain) NSDictionary * turnOffProbability;              //@synthesize turnOffProbability=_turnOffProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithWantTurnOff:(long long)arg1 turnOffProbability:(id)arg2 ;
-(long long)wantTurnOff;
-(void)setWantTurnOff:(long long)arg1 ;
-(NSDictionary *)turnOffProbability;
-(void)setTurnOffProbability:(NSDictionary *)arg1 ;
@end

