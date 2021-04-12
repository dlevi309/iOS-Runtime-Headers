/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString, NSURL;

@interface GEOAppStoreAppClip : NSObject {

	NSString* _bundleID;
	NSString* _title;
	NSString* _subtitle;
	NSURL* _appClipURL;
	NSURL* _artworkURL;

}

@property (nonatomic,copy) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSURL * appClipURL;              //@synthesize appClipURL=_appClipURL - In the implementation block
@property (nonatomic,retain) NSURL * artworkURL;              //@synthesize artworkURL=_artworkURL - In the implementation block
-(void)setArtworkURL:(NSURL *)arg1 ;
-(NSURL *)artworkURL;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 appClipURL:(id)arg4 artworkURL:(id)arg5 ;
-(void)setAppClipURL:(NSURL *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSURL *)appClipURL;
-(NSString *)title;
@end

