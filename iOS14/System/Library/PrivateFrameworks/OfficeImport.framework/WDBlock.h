/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDText;

@interface WDBlock : NSObject {

	WDText* mText;

}
-(id)initWithText:(id)arg1 ;
-(id)init;
-(void)clearProperties;
-(id)description;
-(id)text;
-(BOOL)isEmpty;
-(id)document;
-(int)blockType;
-(int)textType;
-(id)runIterator;
-(id)newRunIterator;
@end

