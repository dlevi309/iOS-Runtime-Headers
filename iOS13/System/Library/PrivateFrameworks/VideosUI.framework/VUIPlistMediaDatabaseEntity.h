/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)contentDescription;
-(id)isLocal;
-(void)setContentDescription:(NSString *)arg1 ;
-(NSString *)genreTitle;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(NSString *)canonicalID;
-(void)setGenreTitle:(NSString *)arg1 ;
-(void)setCanonicalID:(NSString *)arg1 ;
-(void)_mediaEntityPropertyDidChange:(id)arg1 ;
-(NSURL *)coverArtURL;
-(void)setCoverArtURL:(NSURL *)arg1 ;
@end

