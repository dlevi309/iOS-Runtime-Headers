/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <CoreFoundation/NSEnumerator.h>

@class MPSectionedIdentifierList, NSMutableArray;

@interface MPSectionedIdentifierListEnumerator : NSEnumerator {

	MPSectionedIdentifierList* _sectionedIdentifierList;
	unsigned long long _options;
	NSMutableArray* _contexts;
	NSMutableArray* _nextEmittableEnumerationResults;

}

@property (assign,nonatomic) unsigned long long options;                                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSMutableArray * contexts;                                          //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) NSMutableArray * nextEmittableEnumerationResults;                   //@synthesize nextEmittableEnumerationResults=_nextEmittableEnumerationResults - In the implementation block
@property (nonatomic,readonly) MPSectionedIdentifierList * sectionedIdentifierList;              //@synthesize sectionedIdentifierList=_sectionedIdentifierList - In the implementation block
-(unsigned long long)options;
-(id)nextObject;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSMutableArray *)contexts;
-(void)setContexts:(NSMutableArray *)arg1 ;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 withExclusiveAccessToken:(id)arg3 ;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingAtItem:(id)arg3 inSection:(id)arg4 withExclusiveAccessToken:(id)arg5 ;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingAtTailOfSection:(id)arg3 withExclusiveAccessToken:(id)arg4 ;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingEntry:(id)arg3 withExclusiveAccessToken:(id)arg4 ;
-(id)nextObjectWithExclusiveAccessToken:(id)arg1 ;
-(MPSectionedIdentifierList *)sectionedIdentifierList;
-(NSMutableArray *)nextEmittableEnumerationResults;
-(void)setNextEmittableEnumerationResults:(NSMutableArray *)arg1 ;
@end

