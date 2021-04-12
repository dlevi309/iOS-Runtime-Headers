/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OITSUCustomFormatData;

@interface OITSUCustomFormatCondition : NSObject <NSCopying> {

	int _conditionType;
	double _conditionValue;
	OITSUCustomFormatData* _data;

}

@property (nonatomic,readonly) int conditionType;                         //@synthesize conditionType=_conditionType - In the implementation block
@property (nonatomic,readonly) double conditionValue;                     //@synthesize conditionValue=_conditionValue - In the implementation block
@property (nonatomic,readonly) OITSUCustomFormatData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(OITSUCustomFormatData *)data;
-(int)conditionType;
-(double)conditionValue;
-(id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3 ;
@end

