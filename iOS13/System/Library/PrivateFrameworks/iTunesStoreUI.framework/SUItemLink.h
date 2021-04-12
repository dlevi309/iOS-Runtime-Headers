/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface SUItemLink : NSObject <NSCopying> {

	long long _linkTarget;
	long long _linkType;
	NSString* _title;
	NSURL* _url;

}

@property (assign,nonatomic) long long linkTarget;              //@synthesize linkTarget=_linkTarget - In the implementation block
@property (assign,nonatomic) long long linkType;                //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * URL;                       //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)linkType;
-(void)setLinkType:(long long)arg1 ;
-(long long)linkTarget;
-(void)setLinkTarget:(long long)arg1 ;
@end

