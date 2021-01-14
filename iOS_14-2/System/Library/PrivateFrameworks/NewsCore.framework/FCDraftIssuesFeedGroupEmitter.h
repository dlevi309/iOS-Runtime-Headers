/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedGroupEmitting.h>

@class NSString, NSSet;

@interface FCDraftIssuesFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {

	NSString* _issueListID;

}

@property (nonatomic,retain) NSString * issueListID;                                   //@synthesize issueListID=_issueListID - In the implementation block
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
-(BOOL)wantsToInsertGroupInContext:(id)arg1 ;
-(BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(NSString *)issueListID;
-(void)setIssueListID:(NSString *)arg1 ;
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(BOOL)emitsSingletonGroups;
-(id)initWithIssueListID:(id)arg1 ;
-(NSSet *)emittableGroupTypes;
-(BOOL)shouldEmitContentInFavoritesOnlyMode;
@end

