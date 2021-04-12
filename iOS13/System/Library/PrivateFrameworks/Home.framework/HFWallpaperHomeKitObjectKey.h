/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSUUID;

@interface HFWallpaperHomeKitObjectKey : NSObject {

	unsigned long long _type;
	NSUUID* _uniqueIdentifier;

}

@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)stringFromHomeKitObjectType:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)type;
-(NSUUID *)uniqueIdentifier;
-(id)initWithHomeKitObject:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 uniqueIdentifier:(id)arg2 ;
@end

