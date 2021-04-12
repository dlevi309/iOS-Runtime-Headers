/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WebBookmarksXPCConnection;

@interface SSReadingList : NSObject {

	WebBookmarksXPCConnection* _connection;

}
+(BOOL)supportsURL:(id)arg1 ;
+(id)defaultReadingList;
-(id)init;
-(BOOL)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4 ;
-(BOOL)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 ;
-(void)_setUpConnectionIfNeeded;
-(id)_init;
@end

