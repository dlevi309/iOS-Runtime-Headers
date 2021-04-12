/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)coreAnalyticsRepresentation;
-(double)timestamp;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithTimestamp:(double)arg1 payload:(id)arg2 ;
@end

