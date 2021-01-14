/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)deviceType;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 ;
@end

