/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSURL *)referrerURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(NSString *)referringUserAgent;
-(void)setReferringUserAgent:(NSString *)arg1 ;
-(id)_copyScriptDictionaryRepresentation;
@end

