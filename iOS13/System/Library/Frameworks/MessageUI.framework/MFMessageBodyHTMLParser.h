/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MFMessageBodyParser.h>

@class NSScanner;

@interface MFMessageBodyHTMLParser : MFMessageBodyParser {

	NSScanner* _scanner;

}
-(void)dealloc;
-(BOOL)parse;
-(void)_findBody;
-(void)_consumeNodesFromNode:(id)arg1 upToNode:(id)arg2 ;
-(void)didFindError:(id)arg1 ;
-(BOOL)_isMilestoneTagName:(id)arg1 ;
-(id)initWithHTML:(id)arg1 ;
-(int)messageBodyStringAccumulatorDefaultOptions;
-(Class)messageBodyElementClass;
@end

