/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXPhotosDetailsConfiguration : NSObject <NSCopying> {

	unsigned long long _options;
	Class _barsControllerClass;
	/*^block*/id _unlockDeviceHandler;
	/*^block*/id _unlockDeviceStatus;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) Class barsControllerClass;               //@synthesize barsControllerClass=_barsControllerClass - In the implementation block
@property (nonatomic,copy) id unlockDeviceHandler;                    //@synthesize unlockDeviceHandler=_unlockDeviceHandler - In the implementation block
@property (nonatomic,copy) id unlockDeviceStatus;                     //@synthesize unlockDeviceStatus=_unlockDeviceStatus - In the implementation block
-(id)unlockDeviceHandler;
-(unsigned long long)options;
-(void)setUnlockDeviceStatus:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(Class)barsControllerClass;
-(void)setBarsControllerClass:(Class)arg1 ;
-(void)setUnlockDeviceHandler:(id)arg1 ;
-(id)unlockDeviceStatus;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

