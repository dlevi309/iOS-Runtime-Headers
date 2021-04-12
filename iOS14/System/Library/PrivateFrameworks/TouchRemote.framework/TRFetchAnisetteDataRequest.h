/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRRequestMessage.h>

@interface TRFetchAnisetteDataRequest : TRRequestMessage {

	BOOL _shouldProvision;

}

@property (assign,nonatomic) BOOL shouldProvision;              //@synthesize shouldProvision=_shouldProvision - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldProvision;
-(void)setShouldProvision:(BOOL)arg1 ;
@end

