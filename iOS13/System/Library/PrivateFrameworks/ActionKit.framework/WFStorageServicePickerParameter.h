/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFiCloudDriveAccessResource;

@interface WFStorageServicePickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	WFiCloudDriveAccessResource* _iCloudDriveAccessResource;

}

@property (nonatomic,retain) WFiCloudDriveAccessResource * iCloudDriveAccessResource;              //@synthesize iCloudDriveAccessResource=_iCloudDriveAccessResource - In the implementation block
+(id)referencedActionResourceClasses;
-(BOOL)isHidden;
-(id)possibleStates;
-(id)defaultSupportedVariableTypes;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(void)setActionResources:(id)arg1 ;
-(WFiCloudDriveAccessResource *)iCloudDriveAccessResource;
-(void)setICloudDriveAccessResource:(WFiCloudDriveAccessResource *)arg1 ;
@end

