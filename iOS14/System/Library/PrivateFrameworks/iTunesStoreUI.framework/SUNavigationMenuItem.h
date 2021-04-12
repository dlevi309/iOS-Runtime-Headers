/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUItemContentRating, NSString, NSURL;

@interface SUNavigationMenuItem : NSObject <NSCopying> {

	SUItemContentRating* _contentRating;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,readonly) SUItemContentRating * contentRating;              //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                      //@synthesize url=_url - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(SUItemContentRating *)contentRating;
-(NSURL *)URL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)dealloc;
@end

