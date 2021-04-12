/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface FBSProcessExecutionStrategy : NSObject <NSCopying, BSDescriptionProviding> {

	NSString* _strategyName;
	long long _schedulingPolicy;
	long long _graphicsPolicy;
	long long _jetsamPolicy;
	BOOL _customPolicy;
	unsigned _bksReason;
	unsigned _bksFlags;

}

@property (nonatomic,copy) NSString * strategyName;                                //@synthesize strategyName=_strategyName - In the implementation block
@property (assign,nonatomic) long long schedulingPolicy;                           //@synthesize schedulingPolicy=_schedulingPolicy - In the implementation block
@property (assign,nonatomic) long long graphicsPolicy;                             //@synthesize graphicsPolicy=_graphicsPolicy - In the implementation block
@property (assign,nonatomic) long long jetsamPolicy;                               //@synthesize jetsamPolicy=_jetsamPolicy - In the implementation block
@property (assign,getter=isCustomPolicy,nonatomic) BOOL customPolicy;              //@synthesize customPolicy=_customPolicy - In the implementation block
@property (assign,nonatomic) unsigned reason;                                      //@synthesize bksReason=_bksReason - In the implementation block
@property (assign,nonatomic) unsigned flags;                                       //@synthesize bksFlags=_bksFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)background;
+(void)initialize;
+(id)userInteractive;
+(id)strategyForSchedulingPolicy:(long long)arg1 graphicsPolicy:(long long)arg2 jetsamPolicy:(long long)arg3 ;
+(id)userInteractiveWithoutUI;
+(id)backgroundWithUI;
+(id)policyWithReason:(unsigned)arg1 flags:(unsigned)arg2 ;
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned)flags;
-(NSString *)debugDescription;
-(NSString *)description;
-(BOOL)isCustomPolicy;
-(void)setStrategyName:(NSString *)arg1 ;
-(void)setSchedulingPolicy:(long long)arg1 ;
-(void)setGraphicsPolicy:(long long)arg1 ;
-(void)setJetsamPolicy:(long long)arg1 ;
-(void)setCustomPolicy:(BOOL)arg1 ;
-(long long)graphicsPolicy;
-(long long)jetsamPolicy;
-(NSString *)strategyName;
-(unsigned)reason;
-(void)setFlags:(unsigned)arg1 ;
-(long long)schedulingPolicy;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setReason:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

