/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@interface SGOffsetDictionary : NSObject {

	unsigned short _count;
	SCD_Struct_SG17* _carrierEntries;
	SCD_Struct_SG17* _mruCarrierEntry;
	unsigned long long _payloadOffset;
	unsigned long long _totalPayloadSize;
	unsigned long long _sizeFactor;

}
-(void)dealloc;
-(id)initWithFilehandle:(id)arg1 sizeFactor:(unsigned long long)arg2 keyLength:(int)arg3 singleByteOffset:(BOOL)arg4 ;
-(SCD_Struct_SG17*)carrierEntryForKey:(const char*)arg1 ;
-(unsigned long long)payloadLengthForKey:(const char*)arg1 ;
-(unsigned long long)seekLocationForKey:(const char*)arg1 ;
-(int)payloadCountForKey:(const char*)arg1 ;
-(id)stringValueForKey:(const char*)arg1 fromFile:(id)arg2 ;
-(id)fullMappingFromFile:(id)arg1 ;
@end

