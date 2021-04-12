/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSSet;


@protocol FCFeedGroupEmitting <FCFeedGroupInsertionDescriptor,NSObject>
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,readonly) BOOL shouldEmitContentInFavoritesOnlyMode; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL requiresHeavyweightContent; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
@optional
+(BOOL)canMergeGroupsUnconditionally;
-(BOOL)emitsSingleRefreshSessionGroups;
-(BOOL)canDeferEmittingGroupInContext:(id)arg1;
-(id)backingChannelTagIDWithConfiguration:(id)arg1;
-(BOOL)emitsSingletonGroups;
-(BOOL)canMergeHeadlinesFromGroup:(id)arg1 intoGroup:(id)arg2;
-(BOOL)isRequiredByFollowingEmitters;
-(BOOL)requiresHeavyweightContent;
-(long long)requiredForYouContentTypes;
-(BOOL)supportsPagination;

@required
+(id)groupEmitterIdentifier;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
-(NSSet *)emittableGroupTypes;
-(BOOL)shouldEmitContentInFavoritesOnlyMode;

@end

