/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, NSArray, NSString;

@interface WFWorkflowOrdering : NSObject <WFCloudKitItem> {

	CKRecordID* _identifier;
	NSArray* _orderedWorkflowIDs;

}

@property (nonatomic,copy) NSArray * orderedWorkflowIDs;              //@synthesize orderedWorkflowIDs=_orderedWorkflowIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier;               //@synthesize identifier=_identifier - In the implementation block
+(id)properties;
+(id)recordType;
-(CKRecordID *)identifier;
-(id)initWithZoneID:(id)arg1 ;
-(void)setOrderedWorkflowIDs:(NSArray *)arg1 ;
-(NSArray *)orderedWorkflowIDs;
@end

