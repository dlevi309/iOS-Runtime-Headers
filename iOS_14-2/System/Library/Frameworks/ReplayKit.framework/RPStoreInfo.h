/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/


@class NSString, NSURL;

@interface RPStoreInfo : NSObject {

	NSString* _bundleID;
	NSString* _appName;
	NSString* _author;
	NSURL* _itemURL;
	NSURL* _appArtworkURL;

}

@property (nonatomic,retain) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * appName;                 //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * author;                  //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSURL * itemURL;                    //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,retain) NSURL * appArtworkURL;              //@synthesize appArtworkURL=_appArtworkURL - In the implementation block
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(void)setItemURL:(NSURL *)arg1 ;
-(NSURL *)itemURL;
-(id)dictionary;
-(NSString *)bundleID;
-(NSString *)appName;
-(NSURL *)appArtworkURL;
-(void)setAppArtworkURL:(NSURL *)arg1 ;
@end

