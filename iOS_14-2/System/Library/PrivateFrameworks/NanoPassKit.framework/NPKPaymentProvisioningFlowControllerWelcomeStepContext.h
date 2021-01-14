/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray;

@interface NPKPaymentProvisioningFlowControllerWelcomeStepContext : NPKPaymentProvisioningFlowStepContext {

	BOOL _defaultImagesUsed;
	NSArray* _heroImages;

}

@property (nonatomic,retain) NSArray * heroImages;                //@synthesize heroImages=_heroImages - In the implementation block
@property (assign,nonatomic) BOOL defaultImagesUsed;              //@synthesize defaultImagesUsed=_defaultImagesUsed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setHeroImages:(NSArray *)arg1 ;
-(NSArray *)heroImages;
-(void)setDefaultImagesUsed:(BOOL)arg1 ;
-(BOOL)defaultImagesUsed;
@end

