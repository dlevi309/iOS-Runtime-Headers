/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class TSPObject;

@interface TSPContainedObject : NSObject {

	TSPObject* _owner;

}

@property (assign,nonatomic,__weak) TSPObject * owner;              //@synthesize owner=_owner - In the implementation block
-(TSPObject *)owner;
-(void)setOwner:(TSPObject *)arg1 ;
-(id)initWithOwner:(id)arg1 ;
-(id)documentRoot;
-(void)willModify;
-(void)willModifyForUpgrade;
@end

