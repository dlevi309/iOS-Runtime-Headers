/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SiriCoreConnectionType *)connectionType;
-(int)interfaceIndex;
-(NSString *)policyId;
-(void)setPolicyId:(NSString *)arg1 ;
-(NSNumber *)sendBufferSize;
-(id)initWithConnectionURL:(id)arg1 interfaceIndex:(int)arg2 sendBufferSize:(id)arg3 wwanPreferred:(BOOL)arg4 connectionType:(id)arg5 policyId:(id)arg6 ;
-(NSURL *)connectionURL;
-(BOOL)wwanPreferred;
@end

