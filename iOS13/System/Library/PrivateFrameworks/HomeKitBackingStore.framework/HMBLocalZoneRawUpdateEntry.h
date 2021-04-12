/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithModel:(id)arg1 encoded:(id)arg2 ;
-(NSData *)encoded;
-(void)setEncoded:(NSData *)arg1 ;
@end

