/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface VUIMediaEntityFetchResponse : NSObject <NSCopying> {

	NSArray* _mediaEntities;
	NSArray* _sortIndexes;
	NSArray* _grouping;
	NSArray* _groupingSortIndexes;
	unsigned long long _mediaEntitySubtype;

}

@property (assign,nonatomic) unsigned long long mediaEntitySubtype;              //@synthesize mediaEntitySubtype=_mediaEntitySubtype - In the implementation block
@property (nonatomic,copy) NSArray * mediaEntities;                              //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,copy) NSArray * sortIndexes;                                //@synthesize sortIndexes=_sortIndexes - In the implementation block
@property (nonatomic,copy) NSArray * grouping;                                   //@synthesize grouping=_grouping - In the implementation block
@property (nonatomic,copy) NSArray * groupingSortIndexes;                        //@synthesize groupingSortIndexes=_groupingSortIndexes - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGrouping:(NSArray *)arg1 ;
-(NSArray *)grouping;
-(NSArray *)mediaEntities;
-(BOOL)_updateWithResponse:(id)arg1 changes:(id)arg2 replaceContentsOnNilChanges:(BOOL)arg3 ;
-(NSArray *)sortIndexes;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(void)setSortIndexes:(NSArray *)arg1 ;
-(void)setGroupingSortIndexes:(NSArray *)arg1 ;
-(void)setMediaEntitySubtype:(unsigned long long)arg1 ;
-(NSArray *)groupingSortIndexes;
-(unsigned long long)mediaEntitySubtype;
@end

