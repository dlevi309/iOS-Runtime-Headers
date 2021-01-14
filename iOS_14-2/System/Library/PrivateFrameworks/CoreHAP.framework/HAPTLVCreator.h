/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HAPTLVCreator : HMFObject {

	SCD_Struct_HA4 _tlv;
	BOOL _addHasFailed;

}
+(id)creator;
+(id)creatorWithBufferSize:(unsigned long long)arg1 ;
-(id)serialize;
-(void)dealloc;
-(BOOL)addTLV:(unsigned long long)arg1 number:(id)arg2 ;
-(BOOL)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 number:(id)arg3 ;
-(BOOL)addTLV:(unsigned long long)arg1 data:(id)arg2 ;
-(BOOL)addTLV:(unsigned long long)arg1 string:(id)arg2 ;
-(BOOL)addTLV:(unsigned long long)arg1 uuid:(id)arg2 ;
-(BOOL)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 floatNumber:(id)arg3 ;
-(id)initWithBufferSize:(unsigned long long)arg1 ;
@end

