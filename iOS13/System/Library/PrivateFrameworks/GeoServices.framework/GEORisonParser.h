/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)stringFromNumber:(id)arg1 ;
-(id)stringFromRisonObject:(id)arg1 ;
-(id)objectFromRisonString:(id)arg1 ;
-(id)objectWithReaderInfo:(SCD_Struct_GE168*)arg1 ;
-(id)dictionaryWithReaderInfo:(SCD_Struct_GE168*)arg1 ;
-(id)stringLiteralWithReaderInfo:(SCD_Struct_GE168*)arg1 ;
-(id)arrayWithReaderInfo:(SCD_Struct_GE168*)arg1 ;
-(id)boolWithReaderInfo:(SCD_Struct_GE168*)arg1 ;
-(id)nullWithReaderInfo:(SCD_Struct_GE168*)arg1 ;
-(id)numberWithReaderInfo:(SCD_Struct_GE168*)arg1 ;
-(id)keyWithReaderInfo:(SCD_Struct_GE168*)arg1 ;
-(id)stringFromDictionary:(id)arg1 ;
-(id)stringFromArray:(id)arg1 ;
-(id)stringFromNull:(id)arg1 ;
-(id)stringFromString:(id)arg1 ;
@end

