/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)triggerTypeIcon;
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(id)init;
-(void)setSelection:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)selection;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(NSArray *)selectedDevices;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setSelectedDevices:(NSArray *)arg1 ;
@end

