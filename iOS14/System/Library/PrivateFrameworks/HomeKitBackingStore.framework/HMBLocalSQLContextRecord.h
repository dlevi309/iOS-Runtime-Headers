/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)externalID;
-(id)attributeDescriptions;
-(id)initWithModel:(id)arg1 externalID:(id)arg2 ;
@end

