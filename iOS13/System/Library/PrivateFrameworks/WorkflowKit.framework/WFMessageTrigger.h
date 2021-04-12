/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSString, NSArray;

@interface WFMessageTrigger : WFTrigger {

	NSString* _selectedContents;
	NSArray* _selectedSenders;
	NSArray* _selectedSendersStrings;

}

@property (nonatomic,retain) NSString * selectedContents;                   //@synthesize selectedContents=_selectedContents - In the implementation block
@property (nonatomic,retain) NSArray * selectedSenders;                     //@synthesize selectedSenders=_selectedSenders - In the implementation block
@property (nonatomic,retain) NSArray * selectedSendersStrings;              //@synthesize selectedSendersStrings=_selectedSendersStrings - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(id)localizedDisplayExplanation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(NSArray *)selectedSenders;
-(void)setSelectedSenders:(NSArray *)arg1 ;
-(NSString *)selectedContents;
-(void)setSelectedContents:(NSString *)arg1 ;
-(NSArray *)selectedSendersStrings;
-(void)setSelectedSendersStrings:(NSArray *)arg1 ;
@end

