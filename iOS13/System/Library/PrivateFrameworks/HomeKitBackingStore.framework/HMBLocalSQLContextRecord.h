/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSData;

@interface HMBLocalSQLContextRecord : HMFObject {

	HMBModel* _model;
	NSData* _externalID;

}

@property (nonatomic,readonly) HMBModel * model;                 //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSData * externalID;              //@synthesize externalID=_externalID - In the implementation block
-(HMBModel *)model;
-(id)attributeDescriptions;
-(NSData *)externalID;
-(id)initWithModel:(id)arg1 externalID:(id)arg2 ;
@end

