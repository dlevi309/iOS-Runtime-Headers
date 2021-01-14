/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol CoreMLModelSecurityProtocol;
@class NSString, NSXPCConnection, NSObject;

@interface MLFairPlayDecryptSession : NSObject {

	NSString* _modelPath;
	NSXPCConnection* _xpcConnection;
	NSObject*<CoreMLModelSecurityProtocol> _xpcProxy;

}

@property (nonatomic,copy) NSString * modelPath;                                           //@synthesize modelPath=_modelPath - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<CoreMLModelSecurityProtocol> xpcProxy;              //@synthesize xpcProxy=_xpcProxy - In the implementation block
+(id)decryptSessionForModelAtPath:(id)arg1 keyBlob:(id)arg2 error:(id*)arg3 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcProxy:(NSObject*<CoreMLModelSecurityProtocol>)arg1 ;
-(NSString *)modelPath;
-(void)setModelPath:(NSString *)arg1 ;
-(NSObject*<CoreMLModelSecurityProtocol>)xpcProxy;
-(void)dealloc;
@end

