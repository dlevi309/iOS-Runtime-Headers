/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSMachPortRight.h>

@interface BSMachPortReceiveRight : BSMachPortRight
+(unsigned)_unsafe_decodePort:(id)arg1 ;
+(void)_unsafe_destroyPort:(unsigned)arg1 ;
+(BOOL)_unsafe_isUsablePort:(unsigned)arg1 ;
+(xpc_type_sRef)_decodeType;
+(id)_rightDescription;
-(id)_lock_encodePort:(unsigned)arg1 ;
-(id)init;
-(id)initWithPort:(unsigned)arg1 ;
@end

