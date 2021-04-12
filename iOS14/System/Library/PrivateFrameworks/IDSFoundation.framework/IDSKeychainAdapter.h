/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol IDSKeychainAdapter <NSObject>
@required
-(BOOL)removeKeychainDataOnService:(id)arg1 account:(id)arg2 error:(int*)arg3;
-(BOOL)setKeychainData:(id)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 allowSync:(BOOL)arg5 error:(int*)arg6;
-(BOOL)getKeychainData:(id*)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 error:(int*)arg5;

@end

