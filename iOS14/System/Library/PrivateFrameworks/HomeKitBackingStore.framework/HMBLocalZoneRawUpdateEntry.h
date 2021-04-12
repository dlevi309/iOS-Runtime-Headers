/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class NSData, HMBModel;

@interface HMBLocalZoneRawUpdateEntry : HMFObject {

	NSData* _encoded;
	HMBModel* _model;

}

@property (nonatomic,retain) NSData * encoded;              //@synthesize encoded=_encoded - In the implementation block
@property (nonatomic,retain) HMBModel * model;              //@synthesize model=_model - In the implementation block
-(HMBModel *)model;
-(void)setModel:(HMBModel *)arg1 ;
-(NSData *)encoded;
-(id)initWithModel:(id)arg1 encoded:(id)arg2 ;
-(void)setEncoded:(NSData *)arg1 ;
@end

