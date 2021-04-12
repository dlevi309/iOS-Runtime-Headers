/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)canDeferEmittingGroupInContext:(id)arg1;
-(BOOL)supportsPagination;
-(BOOL)canMergeHeadlinesFromGroup:(id)arg1 intoGroup:(id)arg2;
-(id)backingChannelTagIDWithConfiguration:(id)arg1;
-(BOOL)emitsSingletonGroups;
-(BOOL)emitsSingleRefreshSessionGroups;
-(long long)requiredForYouContentTypes;
-(BOOL)requiresHeavyweightContent;
-(BOOL)isRequiredByFollowingEmitters;

@required
+(id)groupEmitterIdentifier;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
-(NSSet *)emittableGroupTypes;
-(BOOL)shouldEmitContentInFavoritesOnlyMode;

@end

