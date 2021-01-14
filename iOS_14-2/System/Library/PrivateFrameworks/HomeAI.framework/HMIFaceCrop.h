/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, NSDate;

@interface HMIFaceCrop : HMFObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSData* _dataRepresentation;
	NSDate* _dateCreated;
	CGRect _faceBoundingBox;

}

@property (copy,readonly) NSUUID * UUID;                            //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSData * dataRepresentation;              //@synthesize dataRepresentation=_dataRepresentation - In the implementation block
@property (copy,readonly) NSDate * dateCreated;                     //@synthesize dateCreated=_dateCreated - In the implementation block
@property (readonly) CGRect faceBoundingBox;                        //@synthesize faceBoundingBox=_faceBoundingBox - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)faceCropFromPhotosFaceCropImageData:(id)arg1 ;
+(CGRect)faceBoxFromPhotosFaceCropImageData:(id)arg1 ;
+(id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1 ;
-(NSData *)dataRepresentation;
-(NSUUID *)UUID;
-(NSDate *)dateCreated;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(CGRect)arg4 ;
-(CGRect)faceBoundingBox;
@end

