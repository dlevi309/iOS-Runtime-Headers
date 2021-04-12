/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(int)level;
-(id)stringForIndex:(unsigned long long)arg1 ;
-(id)initWithString:(id)arg1 level:(int)arg2 formatter:(id)arg3 ;
@end

