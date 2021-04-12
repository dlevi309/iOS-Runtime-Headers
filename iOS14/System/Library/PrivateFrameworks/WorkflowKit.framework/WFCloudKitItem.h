/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class CKRecordID, NSData;


@protocol WFCloudKitItem <NSObject>
@property (nonatomic,readonly) CKRecordID * identifier; 
@property (nonatomic,copy) NSData * recordSystemFieldsData; 
@optional
-(NSData *)recordSystemFieldsData;
-(void)setRecordSystemFieldsData:(id)arg1;
-(unsigned long long)referenceActionForKey:(id)arg1;
-(void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
-(void)ensureFileAssets;

@required
+(id)properties;
+(id)recordType;
-(CKRecordID *)identifier;

@end

