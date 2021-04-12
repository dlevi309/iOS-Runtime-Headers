/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface CMNumberFormatter : NSObject {

	int _format;
	int _language;
	void* _numberFormatter;

}
+(id)formatterForNumberFormat:(int)arg1 language:(int)arg2 ;
-(void)dealloc;
-(id)stringForNumber:(unsigned long long)arg1 ;
-(id)initWithNumberFormat:(int)arg1 language:(int)arg2 ;
@end

