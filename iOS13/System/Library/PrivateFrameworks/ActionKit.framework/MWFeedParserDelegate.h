/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol MWFeedParserDelegate <NSObject>
@optional
-(void)feedParserDidStart:(id)arg1;
-(void)feedParser:(id)arg1 didParseFeedInfo:(id)arg2;
-(void)feedParser:(id)arg1 didParseFeedItem:(id)arg2;
-(void)feedParserDidFinish:(id)arg1;
-(void)feedParser:(id)arg1 didFailWithError:(id)arg2;

@end

