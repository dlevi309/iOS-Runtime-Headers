/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class CKRecordID;


@protocol WFCloudKitItem <NSObject>
@property (nonatomic,readonly) CKRecordID * identifier; 
@optional
-(unsigned long long)referenceActionForKey:(id)arg1;
-(void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
-(void)ensureFileAssets;

@required
+(id)properties;
+(id)recordType;
-(CKRecordID *)identifier;

@end

