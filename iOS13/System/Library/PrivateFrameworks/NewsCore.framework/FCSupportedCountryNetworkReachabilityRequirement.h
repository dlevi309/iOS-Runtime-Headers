/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCNetworkReachabilityRequirement.h>

@protocol FCNetworkReachabilityRequirementObserving;
@class NSString;

@interface FCSupportedCountryNetworkReachabilityRequirement : NSObject <FCNetworkReachabilityRequirement> {

	BOOL _satisfied;
	id<FCNetworkReachabilityRequirementObserving> observer;

}

@property (assign,getter=isSatisfied,nonatomic) BOOL satisfied;                                          //@synthesize satisfied=_satisfied - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long offlineReason; 
@property (assign,nonatomic,__weak) id<FCNetworkReachabilityRequirementObserving> observer; 
-(id)init;
-(id<FCNetworkReachabilityRequirementObserving>)observer;
-(void)_update;
-(void)setObserver:(id<FCNetworkReachabilityRequirementObserving>)arg1 ;
-(long long)offlineReason;
-(BOOL)isSatisfied;
-(void)setSatisfied:(BOOL)arg1 ;
@end

