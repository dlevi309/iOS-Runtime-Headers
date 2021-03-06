/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEIKEv2EAPProtocol, NSMutableData;

@interface NEIKEv2EAP : NSObject {

	EAPClientPluginData_s* _pluginData;
	NEIKEv2EAPProtocol* _protocol;
	EAPClientModule_sRef _module;

}

@property (retain) NEIKEv2EAPProtocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
@property (assign) EAPClientModule_sRef module;                //@synthesize module=_module - In the implementation block
@property (readonly) NSMutableData * sessionKey; 
+(unsigned)codeForPayload:(id)arg1 ;
+(EAPClientModule_sRef)getAKAModule;
+(EAPClientModule_sRef)getSIMModule;
+(EAPClientModule_sRef)getMSCHAPv2Module;
+(EAPClientModule_sRef)getGTCModule;
+(EAPClientModule_sRef)getTLSModule;
+(EAPClientModule_sRef)getPEAPModule;
+(unsigned)typeForPayload:(id)arg1 ;
+(EAPClientModule_sRef)loadModuleForType:(unsigned)arg1 ;
-(void)setProtocol:(NEIKEv2EAPProtocol *)arg1 ;
-(id)init;
-(NEIKEv2EAPProtocol *)protocol;
-(NSMutableData *)sessionKey;
-(void)setModule:(EAPClientModule_sRef)arg1 ;
-(id)copyProperties:(unsigned)arg1 ;
-(id)selectModuleForPayload:(id)arg1 ikeSA:(id)arg2 ;
-(id)createPayloadResponseForRequest:(id)arg1 type:(unsigned)arg2 typeData:(id)arg3 typeString:(id)arg4 ;
-(id)createPayloadResponseForRequest:(id)arg1 ikeSA:(id)arg2 success:(BOOL*)arg3 reportEAPError:(BOOL*)arg4 ;
-(EAPClientModule_sRef)module;
-(void)dealloc;
@end

