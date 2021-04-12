/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SSURLRequestProperties;

@interface SUNavigationHistoryItem : NSObject <NSCopying> {

	NSString* _title;
	SSURLRequestProperties* _urlRequestProperties;

}

@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) SSURLRequestProperties * URLRequestProperties;              //@synthesize urlRequestProperties=_urlRequestProperties - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(SSURLRequestProperties *)URLRequestProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)dealloc;
@end

