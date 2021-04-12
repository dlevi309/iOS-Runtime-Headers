/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDString, EDAlignmentInfo, EDProtection;

@interface EDTextBox : NSObject {

	EDString* mText;
	EDAlignmentInfo* mAlignmentInfo;
	EDProtection* mProtection;

}
+(id)textBox;
-(id)description;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)protection;
-(void)setProtection:(id)arg1 ;
-(id)alignmentInfo;
-(void)setAlignmentInfo:(id)arg1 ;
@end

