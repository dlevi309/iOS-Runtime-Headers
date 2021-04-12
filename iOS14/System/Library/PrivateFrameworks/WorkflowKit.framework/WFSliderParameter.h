/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>

@class NSNumber, NSString, WFImage;

@interface WFSliderParameter : WFParameter <WFModuleSummarySupporting> {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSNumber * minimumValue;               //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;               //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) WFImage * minimumIcon; 
@property (nonatomic,readonly) WFImage * maximumIcon; 
-(id)moduleSummarySlotForState:(id)arg1 ;
-(NSNumber *)maximumValue;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(BOOL)shouldAlignLabels;
-(WFImage *)minimumIcon;
-(WFImage *)maximumIcon;
-(id)localizedLabelWithState:(id)arg1 ;
@end

