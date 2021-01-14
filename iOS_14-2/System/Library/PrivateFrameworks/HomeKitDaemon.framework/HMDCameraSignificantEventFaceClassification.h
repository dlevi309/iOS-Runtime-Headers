/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSString;

@interface HMDCameraSignificantEventFaceClassification : HMFObject <NSCopying, NSMutableCopying> {

	NSUUID* _UUID;
	NSUUID* _personManagerUUID;
	NSUUID* _personUUID;
	NSString* _personName;
	NSUUID* _unassociatedFaceCropUUID;

}

@property (copy) NSUUID * personUUID;                              //@synthesize personUUID=_personUUID - In the implementation block
@property (copy) NSString * personName;                            //@synthesize personName=_personName - In the implementation block
@property (copy) NSUUID * unassociatedFaceCropUUID;                //@synthesize unassociatedFaceCropUUID=_unassociatedFaceCropUUID - In the implementation block
@property (copy,readonly) NSUUID * UUID;                           //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSUUID * personManagerUUID;              //@synthesize personManagerUUID=_personManagerUUID - In the implementation block
+(id)faceClassificationWithHMIFaceClassification:(id)arg1 person:(id)arg2 ;
-(NSUUID *)unassociatedFaceCropUUID;
-(void)setUnassociatedFaceCropUUID:(NSUUID *)arg1 ;
-(NSUUID *)UUID;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributeDescriptions;
-(NSUUID *)personUUID;
-(void)setPersonUUID:(NSUUID *)arg1 ;
-(NSString *)personName;
-(unsigned long long)hash;
-(void)setPersonName:(NSString *)arg1 ;
-(NSUUID *)personManagerUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 personManagerUUID:(id)arg2 ;
@end

