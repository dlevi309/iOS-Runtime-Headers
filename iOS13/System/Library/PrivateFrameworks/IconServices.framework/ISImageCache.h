/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


#import <IconServices/IconServices-Structs.h>
@class NSMutableDictionary;

@interface ISImageCache : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _imageBagsByDescriptor;

}

@property (assign) os_unfair_lock_s lock;                                    //@synthesize lock=_lock - In the implementation block
@property (retain) NSMutableDictionary * imageBagsByDescriptor;              //@synthesize imageBagsByDescriptor=_imageBagsByDescriptor - In the implementation block
-(id)init;
-(id)debugDescription;
-(os_unfair_lock_s)lock;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(id)imageForDescriptor:(id)arg1 ;
-(void)setImage:(id)arg1 forDescriptor:(id)arg2 ;
-(id)allImages;
-(NSMutableDictionary *)imageBagsByDescriptor;
-(void)setImageBagsByDescriptor:(NSMutableDictionary *)arg1 ;
@end

