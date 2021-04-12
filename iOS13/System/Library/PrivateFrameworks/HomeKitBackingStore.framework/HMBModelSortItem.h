/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSUUID, NSMutableSet;

@interface HMBModelSortItem : HMFObject {

	HMBModel* _model;
	NSUUID* _modelID;
	NSUUID* _parentModelID;
	NSMutableSet* _dependentModels;
	unsigned long long _mark;

}

@property (nonatomic,retain) HMBModel * model;                            //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSUUID * modelID;                            //@synthesize modelID=_modelID - In the implementation block
@property (nonatomic,retain) NSUUID * parentModelID;                      //@synthesize parentModelID=_parentModelID - In the implementation block
@property (nonatomic,retain) NSMutableSet * dependentModels;              //@synthesize dependentModels=_dependentModels - In the implementation block
@property (assign,nonatomic) unsigned long long mark;                     //@synthesize mark=_mark - In the implementation block
-(HMBModel *)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(HMBModel *)arg1 ;
-(unsigned long long)mark;
-(NSUUID *)modelID;
-(void)setMark:(unsigned long long)arg1 ;
-(void)setModelID:(NSUUID *)arg1 ;
-(NSUUID *)parentModelID;
-(void)setParentModelID:(NSUUID *)arg1 ;
-(NSMutableSet *)dependentModels;
-(void)setDependentModels:(NSMutableSet *)arg1 ;
@end

