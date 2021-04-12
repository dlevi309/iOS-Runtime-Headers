/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/MWFeedParserDelegate.h>

@class MWFeedParser, NSString;

@interface WFRSSFeedAction : WFAction <MWFeedParserDelegate> {

	MWFeedParser* _parser;

}

@property (nonatomic,retain) MWFeedParser * parser;                 //@synthesize parser=_parser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(MWFeedParser *)parser;
-(void)setParser:(MWFeedParser *)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)feedParser:(id)arg1 didParseFeedItem:(id)arg2 ;
-(void)feedParserDidFinish:(id)arg1 ;
-(void)feedParser:(id)arg1 didFailWithError:(id)arg2 ;
@end

