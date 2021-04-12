/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(void)setUUID:(NSUUID *)arg1 ;
@end

