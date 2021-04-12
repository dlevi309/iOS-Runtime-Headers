/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@class NSURL, NSNumber, SiriCoreConnectionType, NSString;

@interface SiriCoreAceConnectionAnalysisInfo : NSObject {

	BOOL _wwanPreferred;
	int _interfaceIndex;
	NSURL* _connectionURL;
	NSNumber* _sendBufferSize;
	SiriCoreConnectionType* _connectionType;
	NSString* _policyId;

}

@property (nonatomic,readonly) NSURL * connectionURL;                                //@synthesize connectionURL=_connectionURL - In the implementation block
@property (nonatomic,readonly) int interfaceIndex;                                   //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sendBufferSize;                       //@synthesize sendBufferSize=_sendBufferSize - In the implementation block
@property (nonatomic,readonly) BOOL wwanPreferred;                                   //@synthesize wwanPreferred=_wwanPreferred - In the implementation block
@property (nonatomic,readonly) SiriCoreConnectionType * connectionType;              //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,copy) NSString * policyId;                                      //@synthesize policyId=_policyId - In the implementation block
-(int)interfaceIndex;
-(SiriCoreConnectionType *)connectionType;
-(NSNumber *)sendBufferSize;
-(NSString *)policyId;
-(void)setPolicyId:(NSString *)arg1 ;
-(NSURL *)connectionURL;
-(id)initWithConnectionURL:(id)arg1 interfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(BOOL)arg4 connectionType:(id)arg5 policyId:(id)arg6 ;
-(BOOL)wwanPreferred;
@end

