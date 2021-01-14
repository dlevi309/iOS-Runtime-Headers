/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

