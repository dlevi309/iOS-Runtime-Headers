/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSNumber;

@interface VUIPlistMediaDatabaseEntity : NSObject <NSCopying> {

	NSString* _identifier;
	unsigned long long _type;
	NSString* _title;
	NSString* _genreTitle;
	NSString* _contentDescription;
	NSURL* _coverArtURL;
	NSString* _canonicalID;

}

@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * genreTitle;                                 //@synthesize genreTitle=_genreTitle - In the implementation block
@property (nonatomic,copy) NSString * contentDescription;                         //@synthesize contentDescription=_contentDescription - In the implementation block
@property (nonatomic,copy) NSURL * coverArtURL;                                   //@synthesize coverArtURL=_coverArtURL - In the implementation block
@property (nonatomic,copy) NSString * canonicalID;                                //@synthesize canonicalID=_canonicalID - In the implementation block
@property (getter=isLocal,nonatomic,copy,readonly) NSNumber * local; 
-(id)isLocal;
-(id)dictionaryRepresentation;
-(id)init;
-(void)setContentDescription:(NSString *)arg1 ;
-(NSString *)canonicalID;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)genreTitle;
-(unsigned long long)type;
-(unsigned long long)hash;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)contentDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setGenreTitle:(NSString *)arg1 ;
-(void)setCanonicalID:(NSString *)arg1 ;
-(void)_mediaEntityPropertyDidChange:(id)arg1 ;
-(NSURL *)coverArtURL;
-(void)setCoverArtURL:(NSURL *)arg1 ;
@end

