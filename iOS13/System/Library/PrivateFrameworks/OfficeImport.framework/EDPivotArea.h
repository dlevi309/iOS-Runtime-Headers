/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDCollection, EDReference;

@interface EDPivotArea : NSObject {

	BOOL mGrandCol;
	BOOL mGrandRow;
	BOOL mOutline;
	int mType;
	EDCollection* mReferences;
	EDReference* mOffset;

}
+(id)pivotArea;
-(id)init;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setOffset:(id)arg1 ;
-(id)offset;
-(BOOL)outline;
-(void)setOutline:(BOOL)arg1 ;
-(id)references;
-(BOOL)grandRow;
-(void)setGrandRow:(BOOL)arg1 ;
-(BOOL)grandCol;
-(void)setGrandCol:(BOOL)arg1 ;
@end

