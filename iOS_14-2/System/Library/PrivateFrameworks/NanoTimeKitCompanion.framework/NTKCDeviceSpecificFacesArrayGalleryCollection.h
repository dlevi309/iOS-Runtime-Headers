/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFacesArrayGalleryCollection.h>

@class CLKDevice;

@interface NTKCDeviceSpecificFacesArrayGalleryCollection : NTKCFacesArrayGalleryCollection {

	CLKDevice* _device;

}

@property (nonatomic,readonly) CLKDevice * device;              //@synthesize device=_device - In the implementation block
+(id)facesForDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)descriptionText;
-(CLKDevice *)device;
-(id)title;
-(void)loadFaces;
@end

