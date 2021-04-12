/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMBSQLStatementQueryPlanTuple : HMFObject {

	int _row;
	int _parent;
	NSString* _detail;

}

@property (nonatomic,readonly) int row;                        //@synthesize row=_row - In the implementation block
@property (nonatomic,readonly) int parent;                     //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) NSString * detail;              //@synthesize detail=_detail - In the implementation block
-(int)parent;
-(int)row;
-(NSString *)detail;
-(id)initWithRow:(id)arg1 ;
@end

