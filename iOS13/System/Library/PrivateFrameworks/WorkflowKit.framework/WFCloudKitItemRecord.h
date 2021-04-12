/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFCloudKitItem;
@class CKRecord;

@interface WFCloudKitItemRecord : NSObject {

	CKRecord* _record;
	id<WFCloudKitItem> _item;

}

@property (nonatomic,readonly) CKRecord * record;                    //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) id<WFCloudKitItem> item;              //@synthesize item=_item - In the implementation block
-(id<WFCloudKitItem>)item;
-(CKRecord *)record;
-(id)initWithRecord:(id)arg1 item:(id)arg2 ;
@end

