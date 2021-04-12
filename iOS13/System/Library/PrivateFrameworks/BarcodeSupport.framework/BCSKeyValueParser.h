/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


#import <BarcodeSupport/BarcodeSupport-Structs.h>
@class NSString, NSMutableDictionary, NSDictionary;

@interface BCSKeyValueParser : NSObject {

	NSString* _string;
	unsigned long long _currentIndex;
	unsigned long long _stringLength;
	NSMutableDictionary* _keyValuePairs;

}

@property (nonatomic,copy,readonly) NSDictionary * keyValuePairs; 
-(NSDictionary *)keyValuePairs;
-(id)initWithString:(id)arg1 startIndex:(unsigned long long)arg2 ;
-(BOOL)_parseNextKeyValuePair;
-(unsigned long long)_indexOfDelimiter:(id)arg1 range:(NSRange)arg2 ;
-(unsigned long long)_numberOfPreviousBackSlashesFromIndex:(unsigned long long)arg1 withinRange:(NSRange)arg2 ;
@end

