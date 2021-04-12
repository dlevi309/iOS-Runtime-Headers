/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKRecord *)record;
-(id<WFCloudKitItem>)item;
-(id)initWithRecord:(id)arg1 item:(id)arg2 ;
@end

