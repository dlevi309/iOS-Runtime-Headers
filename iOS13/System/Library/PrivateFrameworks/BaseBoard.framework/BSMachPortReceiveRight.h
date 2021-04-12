/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSMachPortRight.h>

@interface BSMachPortReceiveRight : BSMachPortRight
+(id)_rightDescription;
+(BOOL)_unsafe_isUsablePort:(unsigned)arg1 ;
+(void)_unsafe_destroyPort:(unsigned)arg1 ;
+(unsigned)_unsafe_decodePort:(id)arg1 ;
+(xpc_type_sRef)_decodeType;
-(id)init;
-(id)initWithPort:(unsigned)arg1 ;
-(id)_lock_encodePort:(unsigned)arg1 ;
@end

