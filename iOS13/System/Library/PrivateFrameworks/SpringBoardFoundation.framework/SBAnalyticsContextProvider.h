/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventContextProviding.h>

@class SBSAnalyticsState, SBFAnalyticsBackend, NSString;

@interface SBAnalyticsContextProvider : NSObject <SBFAnalyticsBackendEventContextProviding> {

	SBSAnalyticsState* _eventPayload;
	SBFAnalyticsBackend* _backend;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBSAnalyticsState * eventPayload; 
-(NSString *)description;
-(SBSAnalyticsState *)eventPayload;
-(void)stateForQueryName:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithEventPayload:(id)arg1 backend:(id)arg2 ;
@end

