/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSUUID;

@interface NTKFaceCollectionUpdate : NSObject {

	long long _type;
	NSUUID* _uuid;
	/*^block*/id _block;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) id block;                    //@synthesize block=_block - In the implementation block
+(id)updateWithType:(long long)arg1 uuid:(id)arg2 block:(/*^block*/id)arg3 ;
-(long long)type;
-(id)block;
-(NSUUID *)uuid;
@end

