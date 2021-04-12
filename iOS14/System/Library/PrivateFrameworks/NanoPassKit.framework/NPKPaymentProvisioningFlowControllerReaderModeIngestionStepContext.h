/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)ingestionState;
-(void)setIngestionState:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithRequestContext:(id)arg1 ;
-(double)ingestionProgress;
-(void)setIngestionProgress:(double)arg1 ;
-(NSURL *)physicalCardImageURL;
-(void)setPhysicalCardImageURL:(NSURL *)arg1 ;
@end

