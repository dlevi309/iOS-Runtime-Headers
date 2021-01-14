/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRRequestMessage.h>

@interface TRHandshakeRequest : TRRequestMessage {

	long long _protocolVersion;

}

@property (assign,nonatomic) long long protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProtocolVersion:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)protocolVersion;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

