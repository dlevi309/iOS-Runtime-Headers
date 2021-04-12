/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDText;

@interface WDBlock : NSObject {

	WDText* mText;

}
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(id)text;
-(void)clearProperties;
-(id)initWithText:(id)arg1 ;
-(id)document;
-(int)blockType;
-(int)textType;
-(id)runIterator;
-(id)newRunIterator;
@end

