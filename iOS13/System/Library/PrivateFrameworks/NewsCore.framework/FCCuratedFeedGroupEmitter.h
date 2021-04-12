/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@protocol FCFeedGroupInsertionDescriptor;
@class NSString, NSSet;

@interface FCCuratedFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	id<FCFeedGroupInsertionDescriptor> _insertionDescriptor;

}

@property (nonatomic,copy,readonly) id<FCFeedGroupInsertionDescriptor> insertionDescriptor;              //@synthesize insertionDescriptor=_insertionDescriptor - In the implementation block
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
-(id)init;
-(BOOL)wantsToInsertGroupInContext:(id)arg1 ;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(NSSet *)emittableGroupTypes;
-(BOOL)shouldEmitContentInFavoritesOnlyMode;
-(id)backingChannelTagIDWithConfiguration:(id)arg1 ;
-(BOOL)emitsSingleRefreshSessionGroups;
-(long long)requiredForYouContentTypes;
-(BOOL)requiresHeavyweightContent;
-(id)initWithInsertionDescriptor:(id)arg1 ;
-(id<FCFeedGroupInsertionDescriptor>)insertionDescriptor;
@end

