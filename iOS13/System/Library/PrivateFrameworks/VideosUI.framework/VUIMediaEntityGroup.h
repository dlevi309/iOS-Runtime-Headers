/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSObject, NSArray;

@interface VUIMediaEntityGroup : NSObject <NSCopying> {

	NSObject*<NSCopying> _identifier;
	NSArray* _mediaEntities;
	NSArray* _sortIndexes;

}

@property (nonatomic,copy) NSObject*<NSCopying> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * mediaEntities;                      //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,copy) NSArray * sortIndexes;                        //@synthesize sortIndexes=_sortIndexes - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<NSCopying>)identifier;
-(void)setIdentifier:(NSObject*<NSCopying>)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSArray *)mediaEntities;
-(NSArray *)sortIndexes;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(void)setSortIndexes:(NSArray *)arg1 ;
@end

