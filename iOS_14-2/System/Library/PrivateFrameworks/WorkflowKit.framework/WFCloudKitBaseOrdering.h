/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFCloudKitOrdering.h>

@class NSString, NSOrderedSet, CKRecordID, NSData, NSArray;

@interface WFCloudKitBaseOrdering : NSObject <WFCloudKitOrdering> {

	CKRecordID* _identifier;
	NSData* _recordSystemFieldsData;
	NSArray* _orderedWorkflowIDsArray;
	NSArray* _orderedFolderIDsArray;

}

@property (nonatomic,readonly) NSArray * orderedWorkflowIDsArray;              //@synthesize orderedWorkflowIDsArray=_orderedWorkflowIDsArray - In the implementation block
@property (nonatomic,readonly) NSArray * orderedFolderIDsArray;                //@synthesize orderedFolderIDsArray=_orderedFolderIDsArray - In the implementation block
@property (nonatomic,readonly) NSString * collectionIdentifier; 
@property (nonatomic,readonly) NSOrderedSet * orderedWorkflowIDs; 
@property (nonatomic,readonly) NSOrderedSet * orderedFolderIDs; 
@property (nonatomic,readonly) CKRecordID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * recordSystemFieldsData;                    //@synthesize recordSystemFieldsData=_recordSystemFieldsData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)properties;
+(id)recordType;
+(id)collectionIdentifierForRecordID:(id)arg1 ;
+(id)recordBasename;
-(NSString *)collectionIdentifier;
-(CKRecordID *)identifier;
-(NSData *)recordSystemFieldsData;
-(NSOrderedSet *)orderedWorkflowIDs;
-(NSOrderedSet *)orderedFolderIDs;
-(void)setRecordSystemFieldsData:(NSData *)arg1 ;
-(id)initWithIdentifier:(id)arg1 orderedWorkflowIDs:(id)arg2 orderedFolderIDs:(id)arg3 ;
-(NSArray *)orderedWorkflowIDsArray;
-(NSArray *)orderedFolderIDsArray;
@end

