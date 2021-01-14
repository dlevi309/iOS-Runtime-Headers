/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxPlugDescriptor : NSObject {

	FxPlugDescriptorPriv* _priv;

}
+(id)fxPlugDescriptorWithPROPlugIn:(void*)arg1 ;
+(id)fxPlugDescriptorWithFxMetaPlug:(id)arg1 ;
-(id)properties;
-(id)uuid;
-(id)flavor;
-(id)version;
-(id)displayName;
-(void)dealloc;
-(Class)plugInClass;
-(id)initWithPROPlugIn:(void*)arg1 ;
-(id)initWithFxMetaPlug:(id)arg1 ;
-(id)plugInTypeUUID;
-(id)metaPlug;
-(id)groupDescriptor;
-(BOOL)canDoGPU;
-(BOOL)requiresCoreImage;
@end

