/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMDTLVCreator : HMFObject {

	SCD_Struct_HM24 _tlv;
	BOOL _addHasFailed;

}
+(id)creator;
+(id)creatorWithBufferSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)serialize;
-(BOOL)addTLV:(unsigned long long)arg1 number:(id)arg2 ;
-(BOOL)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 number:(id)arg3 ;
-(BOOL)addTLV:(unsigned long long)arg1 data:(id)arg2 ;
-(BOOL)addTLV:(unsigned long long)arg1 string:(id)arg2 ;
-(BOOL)addTLV:(unsigned long long)arg1 uuid:(id)arg2 ;
-(BOOL)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 floatNumber:(id)arg3 ;
-(id)initWithBufferSize:(unsigned long long)arg1 ;
@end

