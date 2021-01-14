/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTKComplication, NSUUID;

@interface _NTKComplicationCacheKey : NSObject <NSCopying> {

	long long _family;
	NTKComplication* _complication;
	NSUUID* _deviceUUID;

}

@property (readonly) NTKComplication * complication;              //@synthesize complication=_complication - In the implementation block
@property (readonly) long long family;                            //@synthesize family=_family - In the implementation block
@property (readonly) NSUUID * deviceUUID;                         //@synthesize deviceUUID=_deviceUUID - In the implementation block
+(id)keyWithFamily:(long long)arg1 complication:(id)arg2 forDevice:(id)arg3 ;
-(long long)family;
-(unsigned long long)hash;
-(NSUUID *)deviceUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NTKComplication *)complication;
@end

