/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
*/


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
-(id)readMessageType:(Class)arg1 fromString:(id)arg2 ;
-(void)dealloc;
@end

