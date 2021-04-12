/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class CHDDataValuesCollection, CHDFormula, EDResources;

@interface CHDData : NSObject {

	CHDDataValuesCollection* mDataValues;
	CHDFormula* mFormula;
	unsigned long long mContentFormatId;
	unsigned long long mDataValueIndexCount;
	EDResources* mResources;

}
+(id)dataWithDataPointCount:(unsigned long long)arg1 resources:(id)arg2 ;
+(id)dataWithResources:(id)arg1 ;
-(id)description;
-(BOOL)isEmpty;
-(id)initWithResources:(id)arg1 ;
-(id)formula;
-(unsigned long long)contentFormatId;
-(id)contentFormat;
-(id)dataValues;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(void)setFormula:(id)arg1 chart:(id)arg2 ;
-(void)setDataValueIndexCount:(unsigned long long)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(id)initWithDataPointCount:(unsigned long long)arg1 resources:(id)arg2 ;
-(unsigned long long)countOfCellsBeingReferenced;
-(unsigned long long)dataValueIndexCount;
-(CGPoint)minMaxValues;
-(unsigned long long)averageDataPointDecimalCount;
-(id)firstValueContentFormatWithWorkbook:(id)arg1 ;
@end

