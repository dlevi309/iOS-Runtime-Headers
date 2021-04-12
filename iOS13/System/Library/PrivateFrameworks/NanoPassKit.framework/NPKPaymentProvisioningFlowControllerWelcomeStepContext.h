/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setHeroImages:(NSArray *)arg1 ;
-(NSArray *)heroImages;
-(void)setDefaultImagesUsed:(BOOL)arg1 ;
-(BOOL)defaultImagesUsed;
@end

