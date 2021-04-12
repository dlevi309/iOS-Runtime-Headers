/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDString, EDAlignmentInfo, EDProtection;

@interface EDTextBox : NSObject {

	EDString* mText;
	EDAlignmentInfo* mAlignmentInfo;
	EDProtection* mProtection;

}
+(id)textBox;
-(id)protection;
-(void)setProtection:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)description;
-(id)text;
-(id)alignmentInfo;
-(void)setAlignmentInfo:(id)arg1 ;
@end

