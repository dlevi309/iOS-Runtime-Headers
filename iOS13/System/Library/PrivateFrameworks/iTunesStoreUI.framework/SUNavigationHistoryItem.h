/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(SSURLRequestProperties *)URLRequestProperties;
@end

