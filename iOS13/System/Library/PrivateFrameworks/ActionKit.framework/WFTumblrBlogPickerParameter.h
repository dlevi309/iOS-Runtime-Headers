/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFTumblrAccessResource;

@interface WFTumblrBlogPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	WFTumblrAccessResource* _tumblrAccessResource;

}

@property (nonatomic,readonly) NSArray * possibleStates;                                 //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,retain) WFTumblrAccessResource * tumblrAccessResource;              //@synthesize tumblrAccessResource=_tumblrAccessResource - In the implementation block
+(void)initialize;
+(id)referencedActionResourceClasses;
-(BOOL)isHidden;
-(NSArray *)possibleStates;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(id)defaultSerializedRepresentation;
-(void)setActionResources:(id)arg1 ;
-(void)setTumblrAccessResource:(WFTumblrAccessResource *)arg1 ;
-(void)updateBlogs;
-(WFTumblrAccessResource *)tumblrAccessResource;
@end

