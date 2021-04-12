/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)detail;
-(int)parent;
-(int)row;
-(id)initWithRow:(id)arg1 ;
@end

