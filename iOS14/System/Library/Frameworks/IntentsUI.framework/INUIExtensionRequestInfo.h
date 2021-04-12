/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INInteraction;

@interface INUIExtensionRequestInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requiresUserConsent;
	INInteraction* _interaction;

}

@property (nonatomic,readonly) INInteraction * interaction;              //@synthesize interaction=_interaction - In the implementation block
@property (assign,nonatomic) BOOL requiresUserConsent;                   //@synthesize requiresUserConsent=_requiresUserConsent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithInteraction:(id)arg1 ;
-(INInteraction *)interaction;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)requiresUserConsent;
-(void)setRequiresUserConsent:(BOOL)arg1 ;
@end

