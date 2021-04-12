/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REExportedValue.h>

@interface REExportedObjectValue : REExportedValue {

	id _object;
	BOOL _allowsEncoding;

}
-(unsigned long long)type;
-(id)initWithObject:(id)arg1 ;
-(id)objectValue;
-(unsigned long long)propertyCount;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldEncodeProperty:(id)arg1 ;
-(id)exportedValueForKey:(id)arg1 ;
@end

