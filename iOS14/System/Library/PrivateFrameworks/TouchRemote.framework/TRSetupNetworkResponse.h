/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRResponseMessage.h>

@interface TRSetupNetworkResponse : TRResponseMessage {

	BOOL _hasNetwork;

}

@property (assign,nonatomic) BOOL hasNetwork;              //@synthesize hasNetwork=_hasNetwork - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)hasNetwork;
-(id)initWithCoder:(id)arg1 ;
-(void)setHasNetwork:(BOOL)arg1 ;
@end

