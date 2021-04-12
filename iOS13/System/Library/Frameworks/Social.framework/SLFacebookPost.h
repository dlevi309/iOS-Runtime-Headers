/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSURL, SLFacebookPlace, SLFacebookAlbum, SLFacebookPostPrivacySetting, NSArray;

@interface SLFacebookPost : NSObject <NSSecureCoding> {

	NSMutableArray* _imageData;
	NSMutableArray* _imageAssetURLs;
	NSMutableArray* _videoData;
	NSMutableArray* _videoAssetURLs;
	NSString* _maskedApplicationID;
	NSString* _text;
	NSString* _videoExportPreset;
	NSURL* _link;
	SLFacebookPlace* _place;
	SLFacebookAlbum* _album;
	SLFacebookPostPrivacySetting* _privacySetting;
	NSArray* _taggedUserIDs;

}

@property (retain) NSString * text;                                            //@synthesize text=_text - In the implementation block
@property (retain) NSArray * imageData; 
@property (retain) NSArray * imageAssetURLs; 
@property (retain) NSArray * videoData; 
@property (retain) NSArray * videoAssetURLs; 
@property (retain) NSString * videoExportPreset;                               //@synthesize videoExportPreset=_videoExportPreset - In the implementation block
@property (retain) NSURL * link;                                               //@synthesize link=_link - In the implementation block
@property (retain) SLFacebookPlace * place;                                    //@synthesize place=_place - In the implementation block
@property (retain) SLFacebookAlbum * album;                                    //@synthesize album=_album - In the implementation block
@property (retain) SLFacebookPostPrivacySetting * privacySetting;              //@synthesize privacySetting=_privacySetting - In the implementation block
@property (retain) NSString * maskedApplicationID;                             //@synthesize maskedApplicationID=_maskedApplicationID - In the implementation block
@property (retain) NSArray * taggedUserIDs;                                    //@synthesize taggedUserIDs=_taggedUserIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(SLFacebookAlbum *)album;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(NSString *)videoExportPreset;
-(void)setVideoExportPreset:(NSString *)arg1 ;
-(NSArray *)imageData;
-(SLFacebookPlace *)place;
-(void)setPlace:(SLFacebookPlace *)arg1 ;
-(void)setImageData:(NSArray *)arg1 ;
-(void)setAlbum:(SLFacebookAlbum *)arg1 ;
-(SLFacebookPostPrivacySetting *)privacySetting;
-(void)setPrivacySetting:(SLFacebookPostPrivacySetting *)arg1 ;
-(void)addImageData:(id)arg1 ;
-(void)addImageAssetURL:(id)arg1 ;
-(void)addVideoData:(id)arg1 ;
-(void)addVideoAssetURL:(id)arg1 ;
-(id)_encodableObjectProperties;
-(void)setImageAssetURLs:(NSArray *)arg1 ;
-(void)setVideoAssetURLs:(NSArray *)arg1 ;
-(void)setVideoData:(NSArray *)arg1 ;
-(void)setMaskedApplicationID:(NSString *)arg1 ;
-(NSArray *)imageAssetURLs;
-(NSArray *)videoData;
-(NSArray *)videoAssetURLs;
-(NSString *)maskedApplicationID;
-(NSArray *)taggedUserIDs;
-(void)setTaggedUserIDs:(NSArray *)arg1 ;
@end

