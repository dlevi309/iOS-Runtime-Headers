/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)albumsWithAlbumDataDictionaries:(id)arg1 ;
+(id)albumWithDataDictionary:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setCount:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)canUpload;
-(void)setIsDefaultAlbum:(BOOL)arg1 ;
-(NSString *)coverPhotoIdentifier;
-(BOOL)isDefaultAlbum;
-(void)setCoverPhotoIdentifier:(NSString *)arg1 ;
-(void)setCanUpload:(BOOL)arg1 ;
@end

