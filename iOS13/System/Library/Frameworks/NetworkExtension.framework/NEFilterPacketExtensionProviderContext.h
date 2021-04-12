/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterExtensionProviderContext.h>

@protocol OS_nw_interpose;
@class NSObject, NSMutableDictionary;

@interface NEFilterPacketExtensionProviderContext : NEFilterExtensionProviderContext {

	os_unfair_lock_s _lock;
	NSObject*<OS_nw_interpose> _nw_interpose;
	NSMutableDictionary* _interposes;

}

@property (retain) NSObject*<OS_nw_interpose> nw_interpose;              //@synthesize nw_interpose=_nw_interpose - In the implementation block
@property (retain) NSMutableDictionary * interposes;                     //@synthesize interposes=_interposes - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(id)extensionPoint;
-(void)stopWithReason:(int)arg1 ;
-(void)startFilterWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)interposes;
-(void)setNw_interpose:(NSObject*<OS_nw_interpose>)arg1 ;
-(NSObject*<OS_nw_interpose>)nw_interpose;
-(void)setInterposes:(NSMutableDictionary *)arg1 ;
-(void)interposeHandleFlowEvent:(int)arg1 interface:(id)arg2 flow_id:(unsigned char)arg3 nexus_instance:(unsigned char)arg4 nexus_port:(unsigned)arg5 key:(void*)arg6 key_length:(unsigned)arg7 ;
-(BOOL)interposeClaimWithUUID:(id)arg1 ;
@end

