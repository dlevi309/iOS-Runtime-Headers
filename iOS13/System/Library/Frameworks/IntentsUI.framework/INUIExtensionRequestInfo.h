/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INInteraction *)interaction;
-(BOOL)requiresUserConsent;
-(void)setRequiresUserConsent:(BOOL)arg1 ;
-(id)initWithInteraction:(id)arg1 ;
@end

