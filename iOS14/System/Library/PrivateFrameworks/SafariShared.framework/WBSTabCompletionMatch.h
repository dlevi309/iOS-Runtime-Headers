/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSURLCompletionMatch.h>

@class NSURL, NSString;

@interface WBSTabCompletionMatch : WBSURLCompletionMatch {

	NSURL* _url;
	NSString* _title;

}

@property (nonatomic,readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
+(long long)_matchLocationForString:(id)arg1 url:(id)arg2 title:(id)arg3 ;
-(id)userVisibleURLString;
-(NSURL *)url;
-(id)originalURLString;
-(id)initWithUserTypedString:(id)arg1 url:(id)arg2 title:(id)arg3 forQueryID:(long long)arg4 ;
-(NSString *)title;
@end

