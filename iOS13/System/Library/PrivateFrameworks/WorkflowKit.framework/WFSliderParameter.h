/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>

@class NSNumber, WFImage;

@interface WFSliderParameter : WFParameter {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;

}

@property (nonatomic,retain) NSNumber * minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) WFImage * minimumIcon; 
@property (nonatomic,readonly) WFImage * maximumIcon; 
-(id)initWithDefinition:(id)arg1 ;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(BOOL)shouldAlignLabels;
-(WFImage *)minimumIcon;
-(WFImage *)maximumIcon;
@end

