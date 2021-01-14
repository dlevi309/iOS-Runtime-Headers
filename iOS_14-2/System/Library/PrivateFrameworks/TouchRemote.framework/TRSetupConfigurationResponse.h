/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupConfigurationResponse : TRResponseMessage {

	BOOL _needsNetwork;
	NSSet* _unauthenticatedAccountServices;

}

@property (assign,nonatomic) BOOL needsNetwork;                                 //@synthesize needsNetwork=_needsNetwork - In the implementation block
@property (nonatomic,copy) NSSet * unauthenticatedAccountServices;              //@synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setUnauthenticatedAccountServices:(NSSet *)arg1 ;
-(BOOL)needsNetwork;
-(void)setNeedsNetwork:(BOOL)arg1 ;
-(NSSet *)unauthenticatedAccountServices;
-(id)_stringFromAccountServices:(id)arg1 ;
@end

