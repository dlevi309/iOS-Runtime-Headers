/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, CMNumberFormatter;

@interface WMListLevelTextToken : NSObject {

	NSString* _string;
	int _level;
	CMNumberFormatter* _formatter;

}

@property (readonly) NSString * string;              //@synthesize string=_string - In the implementation block
@property (readonly) int level;                      //@synthesize level=_level - In the implementation block
+(id)tokenWithString:(id)arg1 level:(int)arg2 formatter:(id)arg3 ;
-(id)stringForIndex:(unsigned long long)arg1 ;
-(int)level;
-(NSString *)string;
-(id)initWithString:(id)arg1 level:(int)arg2 formatter:(id)arg3 ;
@end

