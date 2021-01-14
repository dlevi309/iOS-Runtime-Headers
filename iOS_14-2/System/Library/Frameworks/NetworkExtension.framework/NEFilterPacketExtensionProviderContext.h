/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(NSMutableDictionary *)interposes;
-(NSObject*<OS_nw_interpose>)nw_interpose;
-(void)setNw_interpose:(NSObject*<OS_nw_interpose>)arg1 ;
-(void)setInterposes:(NSMutableDictionary *)arg1 ;
-(void)interposeHandleFlowEvent:(int)arg1 interface:(id)arg2 flow_id:(unsigned char)arg3 nexus_instance:(unsigned char)arg4 nexus_port:(unsigned)arg5 key:(void*)arg6 key_length:(unsigned)arg7 ;
-(BOOL)interposeClaimWithUUID:(id)arg1 ;
-(void)stopWithReason:(int)arg1 ;
-(Class)requiredProviderSuperClass;
-(void)startFilterWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)extensionPoint;
-(void)dealloc;
@end

