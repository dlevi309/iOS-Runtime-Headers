/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REExportedValue.h>

@interface REExportedObjectValue : REExportedValue {

	id _object;
	BOOL _allowsEncoding;

}
-(id)objectValue;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)propertyCount;
-(unsigned long long)type;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldEncodeProperty:(id)arg1 ;
-(id)exportedValueForKey:(id)arg1 ;
@end

