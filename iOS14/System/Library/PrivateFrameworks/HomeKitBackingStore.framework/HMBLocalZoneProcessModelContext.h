/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSNumber, NSData;

@interface HMBLocalZoneProcessModelContext : HMFObject {

	HMBModel* _model;
	NSNumber* _outputBlockRow;
	NSData* _externalData;

}

@property (nonatomic,readonly) HMBModel * model;                            //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * outputBlockRow;              //@synthesize outputBlockRow=_outputBlockRow - In the implementation block
@property (nonatomic,readonly) NSData * externalData;                       //@synthesize externalData=_externalData - In the implementation block
-(NSData *)externalData;
-(HMBModel *)model;
-(id)initWithModel:(id)arg1 outputBlockRow:(id)arg2 externalData:(id)arg3 ;
-(NSNumber *)outputBlockRow;
@end

