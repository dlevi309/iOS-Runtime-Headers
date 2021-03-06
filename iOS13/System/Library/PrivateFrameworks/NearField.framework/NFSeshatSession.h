/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NearField-Structs.h>
#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFSeshatSessionCallbacks.h>

@class NSString;

@interface NFSeshatSession : NFSession <NFSeshatSessionCallbacks>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isTransientError:(SCD_Struct_NF2)arg1 ;
-(SCD_Struct_NF2)allocateSlot:(unsigned char)arg1 authorizingUser:(unsigned char)arg2 authorizingUserToken:(id)arg3 outToken:(id*)arg4 outWriteCount:(unsigned*)arg5 ;
-(SCD_Struct_NF2)derive:(unsigned char)arg1 userHash:(id)arg2 outData:(id*)arg3 outWriteCount:(unsigned*)arg4 ;
-(SCD_Struct_NF2)resetCounter:(unsigned char)arg1 userToken:(id)arg2 outWriteCount:(unsigned*)arg3 ;
-(SCD_Struct_NF2)authorizeUpdate:(BOOL)arg1 slotIndex:(unsigned char)arg2 userToken:(id)arg3 outWriteCount:(unsigned*)arg4 ;
-(SCD_Struct_NF2)deleteSlot:(unsigned char)arg1 outWriteCount:(unsigned*)arg2 ;
-(SCD_Struct_NF2)upgradeKey:(unsigned char)arg1 inputData:(id)arg2 outWriteCount:(unsigned*)arg3 ;
-(SCD_Struct_NF2)getData:(id*)arg1 updateKUD:(char*)arg2 outWriteLimit:(unsigned*)arg3 outWriteCount:(unsigned*)arg4 ;
-(SCD_Struct_NF2)obliterate;
-(SCD_Struct_NF2)getHash:(id*)arg1 ;
@end

