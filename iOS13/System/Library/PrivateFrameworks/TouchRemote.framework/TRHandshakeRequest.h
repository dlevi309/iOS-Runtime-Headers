/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRRequestMessage.h>

@interface TRHandshakeRequest : TRRequestMessage {

	long long _protocolVersion;

}

@property (assign,nonatomic) long long protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)protocolVersion;
-(void)setProtocolVersion:(long long)arg1 ;
@end

