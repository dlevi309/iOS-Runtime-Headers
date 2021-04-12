/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)uuid;
-(id)block;
-(long long)type;
@end

