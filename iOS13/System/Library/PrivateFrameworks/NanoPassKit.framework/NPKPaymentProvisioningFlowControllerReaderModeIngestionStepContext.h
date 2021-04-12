/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSURL, NSString;

@interface NPKPaymentProvisioningFlowControllerReaderModeIngestionStepContext : NPKPaymentProvisioningFlowStepContext {

	NSURL* _physicalCardImageURL;
	NSString* _title;
	NSString* _subtitle;
	unsigned long long _ingestionState;
	double _ingestionProgress;

}

@property (nonatomic,retain) NSURL * physicalCardImageURL;                   //@synthesize physicalCardImageURL=_physicalCardImageURL - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                            //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned long long ingestionState;              //@synthesize ingestionState=_ingestionState - In the implementation block
@property (assign,nonatomic) double ingestionProgress;                       //@synthesize ingestionProgress=_ingestionProgress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(unsigned long long)ingestionState;
-(void)setIngestionState:(unsigned long long)arg1 ;
-(double)ingestionProgress;
-(void)setIngestionProgress:(double)arg1 ;
-(NSURL *)physicalCardImageURL;
-(void)setPhysicalCardImageURL:(NSURL *)arg1 ;
@end

