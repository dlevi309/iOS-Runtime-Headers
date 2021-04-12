/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSPObject;

@interface TSPContainedObject : NSObject {

	TSPObject* _owner;

}

@property (assign,nonatomic,__weak) TSPObject * owner;              //@synthesize owner=_owner - In the implementation block
-(void)setOwner:(TSPObject *)arg1 ;
-(id)initWithOwner:(id)arg1 ;
-(TSPObject *)owner;
-(id)documentRoot;
-(void)willModify;
-(void)willModifyForUpgrade;
@end

