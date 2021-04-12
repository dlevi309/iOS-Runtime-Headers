/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRResponseMessage.h>

@class NSSet, NSError;

@interface TRSetupAuthenticationResponse : TRResponseMessage {

	NSSet* _unauthenticatedAccountServices;
	NSError* _error;

}

@property (nonatomic,retain) NSSet * unauthenticatedAccountServices;              //@synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setUnauthenticatedAccountServices:(NSSet *)arg1 ;
-(NSSet *)unauthenticatedAccountServices;
@end

