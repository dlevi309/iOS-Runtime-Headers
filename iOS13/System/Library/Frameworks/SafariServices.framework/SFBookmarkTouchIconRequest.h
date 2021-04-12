/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariSharedUI/WBSTouchIconRequest.h>

@class WebBookmark;

@interface SFBookmarkTouchIconRequest : WBSTouchIconRequest {

	WebBookmark* _bookmark;

}

@property (nonatomic,readonly) WebBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
+(id)requestWithBookmark:(id)arg1 iconGenerationEnabled:(BOOL)arg2 ;
+(id)requestWithBookmark:(id)arg1 ;
-(id)uniqueIdentifier;
-(WebBookmark *)bookmark;
-(id)initWithBookmark:(id)arg1 iconGenerationEnabled:(BOOL)arg2 ;
-(id)initWithBookmark:(id)arg1 ;
@end

