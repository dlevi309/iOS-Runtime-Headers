/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFBluetoothTrigger : WFTrigger {

	NSArray* _selectedDevices;
	unsigned long long _selection;

}

@property (nonatomic,retain) NSArray * selectedDevices;                 //@synthesize selectedDevices=_selectedDevices - In the implementation block
@property (assign,nonatomic) unsigned long long selection;              //@synthesize selection=_selection - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(id)localizedDisplayExplanation;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)selection;
-(void)setSelection:(unsigned long long)arg1 ;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(NSArray *)selectedDevices;
-(void)setSelectedDevices:(NSArray *)arg1 ;
@end

