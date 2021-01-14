/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSUCustomFormatData;

@interface TSUCustomFormatCondition : NSObject <NSCopying> {

	int _conditionType;
	double _conditionValue;
	TSUCustomFormatData* _data;

}

@property (nonatomic,readonly) int conditionType;                       //@synthesize conditionType=_conditionType - In the implementation block
@property (nonatomic,readonly) double conditionValue;                   //@synthesize conditionValue=_conditionValue - In the implementation block
@property (nonatomic,readonly) TSUCustomFormatData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(int)conditionType;
-(TSUCustomFormatData *)data;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)conditionValue;
-(id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3 ;
@end

