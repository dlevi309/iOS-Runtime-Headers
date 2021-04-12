/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@class NSString, NSSet;

@interface FCTrendingStoriesFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	unsigned long long _minPrecedingTopicGroups;

}

@property (assign,nonatomic) unsigned long long minPrecedingTopicGroups;               //@synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,readonly) BOOL shouldEmitContentInFavoritesOnlyMode; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL requiresHeavyweightContent; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
+(id)groupEmitterIdentifier;
-(BOOL)wantsToInsertGroupInContext:(id)arg1 ;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(NSSet *)emittableGroupTypes;
-(BOOL)shouldEmitContentInFavoritesOnlyMode;
-(id)backingChannelTagIDWithConfiguration:(id)arg1 ;
-(BOOL)emitsSingletonGroups;
-(long long)requiredForYouContentTypes;
-(id)initWithMinPrecedingTopicGroups:(unsigned long long)arg1 ;
-(unsigned long long)minPrecedingTopicGroups;
-(void)setMinPrecedingTopicGroups:(unsigned long long)arg1 ;
@end

