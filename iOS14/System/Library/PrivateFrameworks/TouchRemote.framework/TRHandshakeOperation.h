/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TROperation.h>

@interface TRHandshakeOperation : TROperation {

	long long _protocolVersion;

}

@property (assign,nonatomic) long long protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
-(void)execute;
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
-(void)_handleResponse:(id)arg1 ;
@end

