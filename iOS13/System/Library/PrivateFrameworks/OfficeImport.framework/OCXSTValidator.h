/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary;

@interface OCXSTValidator : NSObject {

	NSMutableDictionary* _simpleTypeMap;

}
+(id)validator;
+(id)validateIntegerValue:(long long)arg1 minValue:(long long)arg2 maxValue:(long long)arg3 ;
+(BOOL)isValidValue:(id)arg1 simpleType:(unsigned long long)arg2 ;
+(id)simpleType:(unsigned long long)arg1 integerValue:(long long)arg2 ;
+(id)simpleType:(unsigned long long)arg1 stringValue:(id)arg2 ;
-(id)init;
-(id)simpleTypeMap;
@end

