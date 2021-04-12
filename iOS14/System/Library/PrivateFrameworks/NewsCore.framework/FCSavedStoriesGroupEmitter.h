/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@class FCReadingList, NSSet, NSString;

@interface FCSavedStoriesGroupEmitter : NSObject <FCFeedGroupEmitting> {

	unsigned long long _minPrecedingTopicGroups;
	long long _desiredArticlesCount;
	FCReadingList* _readingList;

}

@property (assign,nonatomic) unsigned long long minPrecedingTopicGroups;               //@synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups - In the implementation block
@property (assign,nonatomic) long long desiredArticlesCount;                           //@synthesize desiredArticlesCount=_desiredArticlesCount - In the implementation block
@property (nonatomic,retain) FCReadingList * readingList;                              //@synthesize readingList=_readingList - In the implementation block
@property (nonatomic,copy,readonly) NSSet * emittableGroupTypes; 
@property (nonatomic,readonly) BOOL shouldEmitContentInFavoritesOnlyMode; 
@property (nonatomic,readonly) BOOL emitsSingletonGroups; 
@property (nonatomic,readonly) BOOL emitsSingleRefreshSessionGroups; 
@property (nonatomic,readonly) long long requiredForYouContentTypes; 
@property (nonatomic,readonly) BOOL requiresHeavyweightContent; 
@property (nonatomic,readonly) BOOL isRequiredByFollowingEmitters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupEmitterIdentifier;
-(id)initWithDesiredArticlesCount:(long long)arg1 ;
-(void)setReadingList:(FCReadingList *)arg1 ;
-(BOOL)wantsToInsertGroupInContext:(id)arg1 ;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(id)backingChannelTagIDWithConfiguration:(id)arg1 ;
-(FCReadingList *)readingList;
-(void)setDesiredArticlesCount:(long long)arg1 ;
-(unsigned long long)minPrecedingTopicGroups;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(BOOL)emitsSingletonGroups;
-(long long)desiredArticlesCount;
-(NSSet *)emittableGroupTypes;
-(BOOL)shouldEmitContentInFavoritesOnlyMode;
-(void)setMinPrecedingTopicGroups:(unsigned long long)arg1 ;
@end

