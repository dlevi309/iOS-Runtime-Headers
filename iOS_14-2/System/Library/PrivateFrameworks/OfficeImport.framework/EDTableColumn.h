/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDResources, EDString;

@interface EDTableColumn : NSObject {

	EDResources* mResources;
	unsigned long long mHeaderRowDxfIndex;
	unsigned long long mTotalsRowDxfIndex;
	unsigned long long mDataAreaDxfIndex;
	EDString* mName;
	EDString* mUniqueName;
	EDString* mTotalsRowLabel;

}
+(id)tableColumnWithResources:(id)arg1 ;
-(id)uniqueName;
-(id)name;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setUniqueName:(id)arg1 ;
-(id)headerRowDxf;
-(void)setHeaderRowDxf:(id)arg1 ;
-(id)totalsRowDxf;
-(void)setTotalsRowDxf:(id)arg1 ;
-(id)dataAreaDxf;
-(void)setDataAreaDxf:(id)arg1 ;
-(id)totalsRowLabel;
-(void)setTotalsRowLabel:(id)arg1 ;
-(unsigned long long)headerRowDxfIndex;
-(void)setHeaderRowDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)totalsRowDxfIndex;
-(void)setTotalsRowDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)dataAreaDxfIndex;
-(void)setDataAreaDxfIndex:(unsigned long long)arg1 ;
@end

