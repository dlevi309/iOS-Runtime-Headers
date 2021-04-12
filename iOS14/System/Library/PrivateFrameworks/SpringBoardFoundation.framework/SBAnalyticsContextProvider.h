/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventContextProviding.h>

@class SBSAnalyticsState, SBFAnalyticsBackend, NSString;

@interface SBAnalyticsContextProvider : NSObject <SBFAnalyticsBackendEventContextProviding> {

	SBSAnalyticsState* _eventPayload;
	SBFAnalyticsBackend* _backend;

}

@property (nonatomic,readonly) SBSAnalyticsState * eventPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stateForQueryName:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)description;
-(SBSAnalyticsState *)eventPayload;
-(id)initWithEventPayload:(id)arg1 backend:(id)arg2 ;
@end

