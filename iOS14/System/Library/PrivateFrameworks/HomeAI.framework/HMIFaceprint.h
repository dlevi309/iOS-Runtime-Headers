/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface HMIFaceprint : HMFObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSData* _data;
	NSUUID* _modelUUID;
	NSUUID* _faceCropUUID;

}

@property (getter=isSentinelFaceprint,readonly) BOOL sentinelFaceprint; 
@property (copy,readonly) NSUUID * UUID;                                             //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSData * data;                                             //@synthesize data=_data - In the implementation block
@property (copy,readonly) NSUUID * modelUUID;                                        //@synthesize modelUUID=_modelUUID - In the implementation block
@property (copy,readonly) NSUUID * faceCropUUID;                                     //@synthesize faceCropUUID=_faceCropUUID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sentinelFaceprintWithUUID:(id)arg1 modelUUID:(id)arg2 faceCropUUID:(id)arg3 ;
-(NSUUID *)UUID;
-(NSUUID *)modelUUID;
-(NSUUID *)faceCropUUID;
-(id)initWithUUID:(id)arg1 data:(id)arg2 modelUUID:(id)arg3 faceCropUUID:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isSentinelFaceprint;
@end

