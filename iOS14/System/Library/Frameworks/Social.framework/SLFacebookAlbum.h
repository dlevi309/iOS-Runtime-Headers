/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SLFacebookAlbum : NSObject <NSSecureCoding> {

	BOOL _canUpload;
	BOOL _isDefaultAlbum;
	NSString* _identifier;
	NSString* _name;
	NSString* _coverPhotoIdentifier;
	long long _count;

}

@property (retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (retain) NSString * coverPhotoIdentifier;              //@synthesize coverPhotoIdentifier=_coverPhotoIdentifier - In the implementation block
@property (assign) long long count;                              //@synthesize count=_count - In the implementation block
@property (assign) BOOL canUpload;                               //@synthesize canUpload=_canUpload - In the implementation block
@property (assign) BOOL isDefaultAlbum;                          //@synthesize isDefaultAlbum=_isDefaultAlbum - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)albumWithDataDictionary:(id)arg1 ;
+(id)albumsWithAlbumDataDictionaries:(id)arg1 ;
-(void)setCount:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setCoverPhotoIdentifier:(NSString *)arg1 ;
-(void)setCanUpload:(BOOL)arg1 ;
-(void)setIsDefaultAlbum:(BOOL)arg1 ;
-(NSString *)coverPhotoIdentifier;
-(BOOL)canUpload;
-(BOOL)isDefaultAlbum;
@end

