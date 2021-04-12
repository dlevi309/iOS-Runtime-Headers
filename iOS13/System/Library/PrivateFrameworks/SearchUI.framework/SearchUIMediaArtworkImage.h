/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIMediaArtworkImage : SearchUIImage {

	NSString* _persistentID;
	NSString* _universalLibraryID;
	NSString* _spotlightIdentifier;
	long long _mediaEntityType;

}

@property (retain) NSString * persistentID;                     //@synthesize persistentID=_persistentID - In the implementation block
@property (retain) NSString * universalLibraryID;               //@synthesize universalLibraryID=_universalLibraryID - In the implementation block
@property (retain) NSString * spotlightIdentifier;              //@synthesize spotlightIdentifier=_spotlightIdentifier - In the implementation block
@property (assign) long long mediaEntityType;                   //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(Class)classForCoder;
-(NSString *)persistentID;
-(void)setPersistentID:(NSString *)arg1 ;
-(void)setMediaEntityType:(long long)arg1 ;
-(void)setUniversalLibraryID:(NSString *)arg1 ;
-(long long)mediaEntityType;
-(NSString *)universalLibraryID;
-(void)setSpotlightIdentifier:(NSString *)arg1 ;
-(NSString *)spotlightIdentifier;
-(id)initWithSFImage:(id)arg1 ;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSpotlightIdentifier:(id)arg1 ;
@end

