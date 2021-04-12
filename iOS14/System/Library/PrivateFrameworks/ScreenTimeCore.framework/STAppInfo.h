/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSString, NSURL, NSData;

@interface STAppInfo : NSObject {

	short _platform;
	long long _source;
	NSString* _bundleIdentifier;
	NSString* _displayName;
	NSString* _developerName;
	NSString* _ratingLabel;
	NSURL* _localURL;
	NSURL* _artworkURL;
	NSData* _artworkData;

}

@property (assign,nonatomic) long long source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) short platform;                         //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSString * developerName;                 //@synthesize developerName=_developerName - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                   //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,copy) NSURL * localURL;                         //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,copy) NSURL * artworkURL;                       //@synthesize artworkURL=_artworkURL - In the implementation block
@property (copy) NSData * artworkData;                               //@synthesize artworkData=_artworkData - In the implementation block
-(void)setArtworkURL:(NSURL *)arg1 ;
-(NSURL *)artworkURL;
-(short)platform;
-(void)setArtworkData:(NSData *)arg1 ;
-(void)setPlatform:(short)arg1 ;
-(NSString *)developerName;
-(void)setDeveloperName:(NSString *)arg1 ;
-(void)setRatingLabel:(NSString *)arg1 ;
-(NSURL *)localURL;
-(NSString *)bundleIdentifier;
-(void)setSource:(long long)arg1 ;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSData *)artworkData;
-(void)setLocalURL:(NSURL *)arg1 ;
-(NSString *)displayName;
-(NSString *)ratingLabel;
-(long long)source;
@end

