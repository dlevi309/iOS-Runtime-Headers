/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

