/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MWFeedParser *)parser;
-(void)cancel;
-(void)setParser:(MWFeedParser *)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)feedParser:(id)arg1 didParseFeedItem:(id)arg2 ;
-(void)feedParserDidFinish:(id)arg1 ;
-(void)feedParser:(id)arg1 didFailWithError:(id)arg2 ;
@end

