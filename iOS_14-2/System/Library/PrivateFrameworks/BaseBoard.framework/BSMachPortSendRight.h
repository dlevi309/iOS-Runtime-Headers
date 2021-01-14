/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSMachPortRight.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BSMachPortSendRight : BSMachPortRight <NSCopying>
+(unsigned)_unsafe_decodePort:(id)arg1 ;
+(id)taskNamePortForPID:(int)arg1 ;
+(void)_unsafe_destroyPort:(unsigned)arg1 ;
+(id)bootstrapLookUpPortWithName:(id)arg1 ;
+(id)bootstrapLookUpWithName:(id)arg1 ;
+(BOOL)_unsafe_isUsablePort:(unsigned)arg1 ;
+(xpc_type_sRef)_decodeType;
+(id)wrapSendRight:(unsigned)arg1 ;
+(id)_rightDescription;
-(id)initWithNonRetainingPort:(unsigned)arg1 ;
-(id)initWithSendRight:(unsigned)arg1 assumeOwnership:(BOOL)arg2 ;
-(id)initWithCopyOfPort:(unsigned)arg1 ;
-(id)initWithSendRight:(unsigned)arg1 ;
-(id)_lock_encodePort:(unsigned)arg1 ;
-(id)initWithCopyOfRight:(id)arg1 ;
-(id)initWithPort:(unsigned)arg1 ;
-(id)initFromReceiveRight:(id)arg1 ;
-(unsigned)sendRight;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

