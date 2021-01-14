/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerHosting.framework/IdleTimerHosting
*/

#import <IdleTimerHosting/IdleTimerHosting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface ITIdleTimeout : NSObject <NSCopying, BSDescriptionProviding> {

	double _duration;
	unsigned long long _identifier;

}

@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)timeoutGeneratorUsingIdentifier:(unsigned long long)arg1 ;
-(id)succinctDescription;
-(id)init;
-(id)initWithDuration:(double)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDuration:(double)arg1 identifier:(unsigned long long)arg2 ;
@end

