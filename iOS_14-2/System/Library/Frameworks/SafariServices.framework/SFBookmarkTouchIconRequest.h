/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariSharedUI/WBSTouchIconRequest.h>

@class WebBookmark;

@interface SFBookmarkTouchIconRequest : WBSTouchIconRequest {

	WebBookmark* _bookmark;

}

@property (nonatomic,readonly) WebBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
+(id)requestWithBookmark:(id)arg1 ;
+(id)requestWithBookmark:(id)arg1 iconGenerationEnabled:(BOOL)arg2 ;
-(WebBookmark *)bookmark;
-(id)uniqueIdentifier;
-(id)initWithBookmark:(id)arg1 ;
-(id)initWithBookmark:(id)arg1 iconGenerationEnabled:(BOOL)arg2 ;
@end

