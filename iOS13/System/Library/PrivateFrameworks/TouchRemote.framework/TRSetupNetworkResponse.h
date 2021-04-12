/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRResponseMessage.h>

@interface TRSetupNetworkResponse : TRResponseMessage {

	BOOL _hasNetwork;

}

@property (assign,nonatomic) BOOL hasNetwork;              //@synthesize hasNetwork=_hasNetwork - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasNetwork;
-(void)setHasNetwork:(BOOL)arg1 ;
@end

