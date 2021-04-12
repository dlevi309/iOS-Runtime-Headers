/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)family;
-(NSUUID *)deviceUUID;
-(NTKComplication *)complication;
@end

