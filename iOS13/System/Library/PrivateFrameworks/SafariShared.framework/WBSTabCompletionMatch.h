/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)url;
-(NSString *)title;
-(id)originalURLString;
-(id)userVisibleURLString;
-(id)initWithUserTypedString:(id)arg1 url:(id)arg2 title:(id)arg3 forQueryID:(long long)arg4 ;
@end

