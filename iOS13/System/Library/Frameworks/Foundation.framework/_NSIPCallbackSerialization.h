/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSUUID;

@interface _NSIPCallbackSerialization : NSObject {

	/*^block*/id _endBlock;
	AB _hasBegun;
	AB _hasEnded;
	NSUUID* _UUID;

}

@property (nonatomic,copy) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
-(id)init;
-(void)dealloc;
-(NSUUID *)UUID;
-(void)sendBeginBlock:(/*^block*/id)arg1 ;
-(void)sendEndBlock:(/*^block*/id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
@end

