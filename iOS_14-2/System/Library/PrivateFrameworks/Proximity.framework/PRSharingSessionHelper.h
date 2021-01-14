/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/


#import <Proximity/Proximity-Structs.h>
@interface PRSharingSessionHelper : NSObject
+(id)UUIDToNSDataMac:(id)arg1 len:(unsigned long long)arg2 ;
+(id)UUIDStringToNSDataMac:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 len:(unsigned long long)arg2 ;
+(id)HexStringToNSDataMac:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
+(id)NSDataMacToUUID:(id)arg1 ;
+(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)UIntToHexString:(unsigned long long)arg1 len:(unsigned long long)arg2 ;
+(unsigned long long)NSDataToUInt64:(id)arg1 ;
+(id)convertMacStringToNSData:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
+(id)reverseNSData:(id)arg1 ;
+(int)ProxToCoarseRange:(long long)arg1 ;
+(id)ProxToString:(long long)arg1 ;
+(long long)CoarseRangeToProx:(int)arg1 ;
@end

