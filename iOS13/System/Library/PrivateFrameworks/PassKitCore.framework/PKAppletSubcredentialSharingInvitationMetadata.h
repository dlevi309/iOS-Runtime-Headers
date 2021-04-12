/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAppletSubcredentialSharingInvitationMetadata : NSObject <NSSecureCoding> {

	BOOL _shouldRequestInvitation;
	NSString* _anonymizationSalt;

}

@property (nonatomic,retain) NSString * anonymizationSalt;              //@synthesize anonymizationSalt=_anonymizationSalt - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestInvitation;              //@synthesize shouldRequestInvitation=_shouldRequestInvitation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setShouldRequestInvitation:(BOOL)arg1 ;
-(void)setAnonymizationSalt:(NSString *)arg1 ;
-(NSString *)anonymizationSalt;
-(BOOL)shouldRequestInvitation;
@end

