/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/


#import <BiomeStreams/BiomeStreams-Structs.h>
@class NSString, NSXPCConnection;

@interface BMStreamsAccessRequest : NSObject {

	SCD_Struct_BM2 _token;
	NSString* _identifier;
	NSXPCConnection* _weakConnection;

}
-(void)requestReadAccessTokenWithStream:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestWriteAccessTokenWithStream:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithAuditToken:(SCD_Struct_BM2)arg1 identifier:(id)arg2 connection:(id)arg3 ;
-(BOOL)_hasDirectoryForStream:(long long)arg1 ;
-(void)_createPublicStreamDirectories;
-(BOOL)hasReadEntitlementForStream:(long long)arg1 ;
-(BOOL)hasWriteEntitlementForStream:(long long)arg1 ;
@end

