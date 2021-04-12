/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)freshlyUnarchivedViewportFromViewport:(id)arg1 ;
+(id)viewportFromData:(id)arg1 ;
+(id)viewportFromPBViewport:(id)arg1 ;
+(id)dataFromViewport:(id)arg1 prune:(BOOL)arg2 preserveBookmark:(id)arg3 ;
+(id)pbViewportFromViewport:(id)arg1 prune:(BOOL)arg2 preserveBookmark:(id)arg3 ;
-(id)initWithArchive:(id)arg1 ;
-(id)init;
-(unsigned long long)numberOfHeadlinesConcealedByGap:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 elements:(id)arg2 ;
-(id)bookmarkForLastHeadline;
-(id)bookmarkForFirstHeadline;
-(NSArray *)internalElements;
-(id)indexPathForHeadlineReferencedByBookmark:(id)arg1 error:(id*)arg2 ;
-(NSArray *)headlines;
-(id)bookmarkForGroup:(id)arg1 headline:(id)arg2 ;
-(double)ageOfTopmostGroup;
-(NSArray *)groupElements;
-(id)initWithIdentifier:(id)arg1 internalElements:(id)arg2 externalElements:(id)arg3 ;
-(id)archiveWithPruning:(BOOL)arg1 preserveBookmark:(id)arg2 ;
-(id)internalIndexPathForBookmark:(id)arg1 ;
-(NSString *)identifier;
-(id)externalIndexPathForBookmark:(id)arg1 ;
-(void)enumerateInternalHeadlinesFromBookmark:(id)arg1 toBookmark:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)deflatedCopy;
-(NSArray *)externalElements;
@end

