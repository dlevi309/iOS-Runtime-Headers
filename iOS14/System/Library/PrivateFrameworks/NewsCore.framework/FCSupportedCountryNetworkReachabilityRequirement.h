/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) long long offlineReason; 
@property (assign,nonatomic,__weak) id<FCNetworkReachabilityRequirementObserving> observer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObserver:(id<FCNetworkReachabilityRequirementObserving>)arg1 ;
-(id)init;
-(id<FCNetworkReachabilityRequirementObserving>)observer;
-(void)setSatisfied:(BOOL)arg1 ;
-(BOOL)isSatisfied;
-(long long)offlineReason;
-(void)_update;
@end

