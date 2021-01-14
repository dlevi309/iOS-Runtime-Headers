/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface EDPivotDataField : NSObject {

	long long mBaseField;
	unsigned long long mBaseItem;
	unsigned long long mFieldId;
	unsigned long long mNumFmtId;
	NSString* mName;
	int mFormat;

}
+(id)pivotDataField;
-(id)init;
-(id)name;
-(id)description;
-(void)setFieldId:(unsigned long long)arg1 ;
-(unsigned long long)fieldId;
-(void)setName:(id)arg1 ;
-(unsigned long long)baseItem;
-(void)setBaseItem:(unsigned long long)arg1 ;
-(unsigned long long)numFmtId;
-(void)setNumFmtId:(unsigned long long)arg1 ;
-(long long)baseField;
-(void)setBaseField:(long long)arg1 ;
-(int)showDataAs;
-(void)setShowDataAs:(int)arg1 ;
@end

