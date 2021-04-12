/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSData, NSMutableSet;

@interface HMDCameraRecordingSessionFaceClassificationContext : HMFObject {

	NSData* _faceCropData;
	NSMutableSet* _faceClassifications;

}

@property (readonly) NSData * faceCropData;                           //@synthesize faceCropData=_faceCropData - In the implementation block
@property (readonly) NSMutableSet * faceClassifications;              //@synthesize faceClassifications=_faceClassifications - In the implementation block
-(NSData *)faceCropData;
-(id)attributeDescriptions;
-(NSMutableSet *)faceClassifications;
-(id)initWithFaceCropData:(id)arg1 ;
@end

