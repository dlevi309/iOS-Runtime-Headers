/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
*/


#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
@class NSCharacterSet, NSString, NSMutableDictionary;

@interface PBTextReader : NSObject {

	NSCharacterSet* _whitespaceAndNewlineCharacterSet;
	NSCharacterSet* _tagNameCharacterSet;
	NSCharacterSet* _nonHexDigitCharacterSet;
	unsigned long long _pos;
	unsigned long long _length;
	NSString* _string;
	NSMutableDictionary* _objects;
	NSMutableDictionary* _cachedObjectTypes;

}
-(id)init;
-(void)dealloc;
-(BOOL)_hasMore;
-(id)readMessageType:(Class)arg1 fromString:(id)arg2 ;
-(id)_stringAtCurrentPositionWithPadding:(unsigned long long)arg1 ;
-(NSRange)_rangeOfCharactersInSetAtCurrentPosition:(id)arg1 ;
-(void)_readTag:(id*)arg1 andType:(unsigned long long*)arg2 ;
-(id)_readValue;
-(id)_readObject:(Class)arg1 ;
-(id)_readStruct:(id)arg1 ;
-(id)_parseNumber:(id)arg1 maxValue:(unsigned long long)arg2 isSigned:(BOOL)arg3 ;
-(id)_readString;
@end

