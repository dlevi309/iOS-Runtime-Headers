/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSWPTwoPartAction.h>

@protocol TSWPHyperlinkHostRepProtocol;
@class TSWPHyperlinkField, TSDRep;

@interface TSWPHyperlinkAction : TSWPTwoPartAction {

	TSWPHyperlinkField* _hyperlinkField;
	TSDRep*<TSWPHyperlinkHostRepProtocol> _hyperlinkRep;

}
+(id)hyperlinkActionWithHyperlink:(id)arg1 inRep:(id)arg2 action:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithHyperlink:(id)arg1 inRep:(id)arg2 action:(/*^block*/id)arg3 ;
@end

