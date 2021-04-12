/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@protocol WFPythonHTMLParserDelegate <NSObject>
@optional
-(void)parser:(id)arg1 foundComment:(id)arg2;
-(void)parser:(id)arg1 foundStartTag:(id)arg2 attributes:(id)arg3;
-(void)parser:(id)arg1 foundData:(id)arg2;
-(void)parser:(id)arg1 foundEndTag:(id)arg2;
-(void)parser:(id)arg1 foundEntityRef:(id)arg2;
-(void)parser:(id)arg1 foundCharacterRef:(id)arg2;
-(void)parser:(id)arg1 foundDoctypeDeclaration:(id)arg2;
-(void)parser:(id)arg1 foundProcessingInstruction:(id)arg2;
-(void)parser:(id)arg1 foundUnknownDeclaration:(id)arg2;

@end

