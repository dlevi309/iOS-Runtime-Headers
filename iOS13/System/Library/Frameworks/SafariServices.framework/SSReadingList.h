/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WebBookmarksXPCConnection;

@interface SSReadingList : NSObject {

	WebBookmarksXPCConnection* _connection;

}
+(BOOL)supportsURL:(id)arg1 ;
+(id)defaultReadingList;
-(id)init;
-(id)_init;
-(BOOL)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4 ;
-(BOOL)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 ;
-(void)_setUpConnectionIfNeeded;
@end

