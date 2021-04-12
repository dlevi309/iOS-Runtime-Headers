/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSNumberFormatter, NSMutableCharacterSet;

@interface GEORisonParser : NSObject {

	NSNumberFormatter* _formatter;
	NSMutableCharacterSet* _risonTerminators;
	NSMutableCharacterSet* _risonEscapes;

}
-(id)init;
-(id)objectWithReaderInfo:(SCD_Struct_GE238*)arg1 ;
-(id)dictionaryWithReaderInfo:(SCD_Struct_GE238*)arg1 ;
-(id)stringLiteralWithReaderInfo:(SCD_Struct_GE238*)arg1 ;
-(id)arrayWithReaderInfo:(SCD_Struct_GE238*)arg1 ;
-(id)boolWithReaderInfo:(SCD_Struct_GE238*)arg1 ;
-(id)nullWithReaderInfo:(SCD_Struct_GE238*)arg1 ;
-(id)numberWithReaderInfo:(SCD_Struct_GE238*)arg1 ;
-(id)keyWithReaderInfo:(SCD_Struct_GE238*)arg1 ;
-(id)stringFromDictionary:(id)arg1 ;
-(id)stringFromArray:(id)arg1 ;
-(id)stringFromNull:(id)arg1 ;
-(id)stringFromString:(id)arg1 ;
-(id)stringFromNumber:(id)arg1 ;
-(id)stringFromRisonObject:(id)arg1 ;
-(id)objectFromRisonString:(id)arg1 ;
@end

