/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHDDataValue : NSObject {

	CHDDataPoint mDataPoint;

}
+(id)dataValue;
+(id)dataValueWithIndex:(long long)arg1 value:(EDValue*)arg2 ;
-(long long)index;
-(id)init;
-(void)setIndex:(long long)arg1 ;
-(void)setValue:(EDValue*)arg1 ;
-(id)description;
-(EDValue*)value;
-(unsigned long long)contentFormatId;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(void)setDataPoint:(CHDDataPoint*)arg1 ;
-(id)contentFormatWithResources:(id)arg1 ;
-(CHDDataPoint*)dataPoint;
-(id)initWithIndex:(long long)arg1 value:(EDValue*)arg2 ;
-(void)setContentFormatWithResources:(id)arg1 resources:(id)arg2 ;
@end

