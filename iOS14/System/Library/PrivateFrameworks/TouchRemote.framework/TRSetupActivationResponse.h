/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRResponseMessage.h>

@interface TRSetupActivationResponse : TRResponseMessage {

	BOOL _activated;

}

@property (assign,nonatomic) BOOL activated;              //@synthesize activated=_activated - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)activated;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setActivated:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

