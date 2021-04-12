/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSArray;

@interface FCFeedViewport : NSObject {

	NSString* _identifier;
	NSArray* _groupElements;
	NSArray* _internalElements;
	NSArray* _externalElements;

}

@property (nonatomic,copy,readonly) NSArray * internalElements;              //@synthesize internalElements=_internalElements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * externalElements;              //@synthesize externalElements=_externalElements - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupElements;                 //@synthesize groupElements=_groupElements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * headlines; 
@property (nonatomic,readonly) double ageOfTopmostGroup; 
+(id)pbViewportFromViewport:(id)arg1 prune:(BOOL)arg2 preserveBookmark:(id)arg3 ;
+(id)viewportFromPBViewport:(id)arg1 ;
+(id)dataFromViewport:(id)arg1 prune:(BOOL)arg2 preserveBookmark:(id)arg3 ;
+(id)viewportFromData:(id)arg1 ;
+(id)freshlyUnarchivedViewportFromViewport:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(id)initWithArchive:(id)arg1 ;
-(NSArray *)headlines;
-(NSArray *)internalElements;
-(NSArray *)externalElements;
-(id)bookmarkForFirstHeadline;
-(id)bookmarkForLastHeadline;
-(void)enumerateInternalHeadlinesFromBookmark:(id)arg1 toBookmark:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithIdentifier:(id)arg1 internalElements:(id)arg2 externalElements:(id)arg3 ;
-(NSArray *)groupElements;
-(id)bookmarkForGroup:(id)arg1 headline:(id)arg2 ;
-(id)externalIndexPathForBookmark:(id)arg1 ;
-(id)internalIndexPathForBookmark:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 elements:(id)arg2 ;
-(double)ageOfTopmostGroup;
-(id)indexPathForHeadlineReferencedByBookmark:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)numberOfHeadlinesConcealedByGap:(id)arg1 ;
-(id)archiveWithPruning:(BOOL)arg1 preserveBookmark:(id)arg2 ;
-(id)deflatedCopy;
@end

