/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSUUID;

@interface REDuetContextDevice : NSObject {

	NSUUID* _identifier;
	unsigned long long _deviceType;

}

@property (nonatomic,readonly) NSUUID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceType;              //@synthesize deviceType=_deviceType - In the implementation block
+(id)localDevice;
+(id)companionDevice;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(unsigned long long)deviceType;
-(id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 ;
@end

