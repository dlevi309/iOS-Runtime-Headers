/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <CoreFoundation/NSEnumerator.h>

@class _MPSectionedIdentifierListProxyEntry, MPSectionedIdentifierList, NSMutableArray, MPSectionedIdentifierListEntry;

@interface MPSectionedIdentifierListReverseEnumerator : NSEnumerator {

	_MPSectionedIdentifierListProxyEntry* _startEntryProxy;
	MPSectionedIdentifierList* _sectionedIdentifierList;
	unsigned long long _options;
	NSMutableArray* _contexts;
	NSMutableArray* _entriesToEmit;
	NSMutableArray* _nextEmittableEnumerationResults;
	MPSectionedIdentifierListEntry* _endEntry;

}

@property (assign,nonatomic) unsigned long long options;                                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSMutableArray * contexts;                                          //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) NSMutableArray * entriesToEmit;                                     //@synthesize entriesToEmit=_entriesToEmit - In the implementation block
@property (nonatomic,retain) NSMutableArray * nextEmittableEnumerationResults;                   //@synthesize nextEmittableEnumerationResults=_nextEmittableEnumerationResults - In the implementation block
@property (nonatomic,retain) MPSectionedIdentifierListEntry * endEntry;                          //@synthesize endEntry=_endEntry - In the implementation block
@property (nonatomic,readonly) MPSectionedIdentifierList * sectionedIdentifierList;              //@synthesize sectionedIdentifierList=_sectionedIdentifierList - In the implementation block
-(id)nextObject;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(MPSectionedIdentifierListEntry *)endEntry;
-(void)setContexts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contexts;
-(void)setEndEntry:(MPSectionedIdentifierListEntry *)arg1 ;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startEntry:(id)arg3 endEntry:(id)arg4 withExclusiveAccessToken:(id)arg5 ;
-(id)nextObjectWithExclusiveAccessToken:(id)arg1 ;
-(MPSectionedIdentifierList *)sectionedIdentifierList;
-(NSMutableArray *)nextEmittableEnumerationResults;
-(void)setNextEmittableEnumerationResults:(NSMutableArray *)arg1 ;
-(id)_startEntryProxy;
-(NSMutableArray *)entriesToEmit;
-(void)setEntriesToEmit:(NSMutableArray *)arg1 ;
@end

