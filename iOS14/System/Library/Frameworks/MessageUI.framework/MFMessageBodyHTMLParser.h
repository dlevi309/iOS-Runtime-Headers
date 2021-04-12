/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MFMessageBodyParser.h>

@class NSScanner;

@interface MFMessageBodyHTMLParser : MFMessageBodyParser {

	NSScanner* _scanner;

}
-(BOOL)parse;
-(void)_findBody;
-(void)_consumeNodesFromNode:(id)arg1 upToNode:(id)arg2 ;
-(void)didFindError:(id)arg1 ;
-(BOOL)_isMilestoneTagName:(id)arg1 ;
-(id)initWithHTML:(id)arg1 ;
-(int)messageBodyStringAccumulatorDefaultOptions;
-(Class)messageBodyElementClass;
-(void)dealloc;
@end

