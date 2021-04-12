/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSMachPortRight.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BSMachPortSendRight : BSMachPortRight <NSCopying>
+(id)wrapSendRight:(unsigned)arg1 ;
+(id)_rightDescription;
+(BOOL)_unsafe_isUsablePort:(unsigned)arg1 ;
+(void)_unsafe_destroyPort:(unsigned)arg1 ;
+(unsigned)_unsafe_decodePort:(id)arg1 ;
+(xpc_type_sRef)_decodeType;
+(id)bootstrapLookUpWithName:(id)arg1 ;
+(id)taskNamePortForPID:(int)arg1 ;
+(id)bootstrapLookUpPortWithName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSendRight:(unsigned)arg1 ;
-(id)initWithPort:(unsigned)arg1 ;
-(unsigned)sendRight;
-(id)_lock_encodePort:(unsigned)arg1 ;
-(id)initWithCopyOfRight:(id)arg1 ;
-(id)initWithCopyOfPort:(unsigned)arg1 ;
-(id)initFromReceiveRight:(id)arg1 ;
-(id)initWithNonRetainingPort:(unsigned)arg1 ;
-(id)initWithSendRight:(unsigned)arg1 assumeOwnership:(BOOL)arg2 ;
@end

