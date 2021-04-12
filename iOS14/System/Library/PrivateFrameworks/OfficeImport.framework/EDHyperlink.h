/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDString, EDReference;

@interface EDHyperlink : NSObject {

	EDString* mPath;
	EDString* mDosPath;
	EDString* mDescriptionText;
	EDString* mTextMark;
	EDString* mToolTip;
	EDReference* mReference;
	int mType;

}
+(id)hyperlink;
-(id)reference;
-(id)descriptionText;
-(void)setDescriptionText:(id)arg1 ;
-(void)setPath:(id)arg1 ;
-(id)path;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(id)toolTip;
-(void)setReference:(id)arg1 ;
-(id)dosPath;
-(void)setDosPath:(id)arg1 ;
-(void)setTextMark:(id)arg1 ;
-(void)setToolTip:(id)arg1 ;
-(id)textMark;
@end

