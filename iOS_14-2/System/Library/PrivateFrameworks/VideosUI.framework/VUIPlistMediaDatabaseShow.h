/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIPlistMediaDatabaseEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface VUIPlistMediaDatabaseShow : VUIPlistMediaDatabaseEntity <NSCopying> {

	NSArray* _seasons;

}

@property (nonatomic,retain) NSArray * seasons;              //@synthesize seasons=_seasons - In the implementation block
-(id)isLocal;
-(id)dictionaryRepresentation;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSArray *)seasons;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSeasons:(NSArray *)arg1 ;
-(id)seasonForIdentifier:(id)arg1 ;
@end

