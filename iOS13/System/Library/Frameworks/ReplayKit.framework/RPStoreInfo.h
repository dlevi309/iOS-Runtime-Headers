/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/


@class NSString, NSArray;

@interface RPStoreInfo : NSObject {

	NSString* _bundleID;
	NSString* _appName;
	NSString* _author;
	NSString* _itemURL;
	NSArray* _categories;
	NSArray* _artworkDictionary;

}

@property (nonatomic,retain) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * appName;                       //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * author;                        //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSString * itemURL;                       //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,retain) NSArray * categories;                     //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSArray * artworkDictionary;              //@synthesize artworkDictionary=_artworkDictionary - In the implementation block
-(id)dictionary;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSArray *)categories;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSArray *)artworkDictionary;
-(NSString *)itemURL;
-(void)setItemURL:(NSString *)arg1 ;
-(void)setArtworkDictionary:(NSArray *)arg1 ;
@end

