/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/


@class NSUUID;

@interface DOCItemCollectionSubscriber : NSObject {

	NSUUID* _UUID;
	/*^block*/id _updateBlock;

}

@property (retain) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
@property (copy) id updateBlock;               //@synthesize updateBlock=_updateBlock - In the implementation block
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
@end

