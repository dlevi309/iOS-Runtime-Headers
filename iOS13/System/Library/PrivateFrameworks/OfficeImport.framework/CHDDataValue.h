/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHDDataValue : NSObject {

	CHDDataPoint mDataPoint;

}
+(id)dataValue;
+(id)dataValueWithIndex:(long long)arg1 value:(EDValue*)arg2 ;
-(id)init;
-(id)description;
-(EDValue*)value;
-(long long)index;
-(void)setValue:(EDValue*)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(unsigned long long)contentFormatId;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(void)setDataPoint:(CHDDataPoint*)arg1 ;
-(id)contentFormatWithResources:(id)arg1 ;
-(CHDDataPoint*)dataPoint;
-(id)initWithIndex:(long long)arg1 value:(EDValue*)arg2 ;
-(void)setContentFormatWithResources:(id)arg1 resources:(id)arg2 ;
@end

