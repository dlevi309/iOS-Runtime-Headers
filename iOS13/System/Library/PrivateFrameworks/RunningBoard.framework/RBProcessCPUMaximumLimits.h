/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface RBProcessCPUMaximumLimits : NSObject <BSDescriptionProviding> {

	unsigned long long _percentage;
	unsigned long long _duration;
	unsigned long long _violationPolicy;

}

@property (nonatomic,readonly) unsigned long long percentage;                   //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) unsigned long long duration;                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long violationPolicy;              //@synthesize violationPolicy=_violationPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)duration;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)percentage;
-(unsigned long long)violationPolicy;
-(id)initWithPercentage:(unsigned long long)arg1 duration:(unsigned long long)arg2 violationPolicy:(unsigned long long)arg3 ;
-(id)unionLimit:(id)arg1 ;
@end

