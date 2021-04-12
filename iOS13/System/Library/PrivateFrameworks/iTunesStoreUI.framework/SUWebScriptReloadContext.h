/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface SUWebScriptReloadContext : NSObject <NSCopying> {

	NSURL* _URL;
	NSString* _referringUserAgent;
	NSURL* _referrerURL;

}

@property (nonatomic,retain) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * referringUserAgent;              //@synthesize referringUserAgent=_referringUserAgent - In the implementation block
@property (nonatomic,retain) NSURL * referrerURL;                      //@synthesize referrerURL=_referrerURL - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSURL *)referrerURL;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(NSString *)referringUserAgent;
-(void)setReferringUserAgent:(NSString *)arg1 ;
-(id)_copyScriptDictionaryRepresentation;
@end

