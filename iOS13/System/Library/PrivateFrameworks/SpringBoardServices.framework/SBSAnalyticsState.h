/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDictionary, NSString;

@interface SBSAnalyticsState : NSObject <BSDescriptionProviding> {

	double _timestamp;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withTimestamp:(double)arg1 payload:(id)arg2 ;
+(id)withTimestamp:(double)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(double)timestamp;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 payload:(id)arg2 ;
-(id)coreAnalyticsRepresentation;
@end

