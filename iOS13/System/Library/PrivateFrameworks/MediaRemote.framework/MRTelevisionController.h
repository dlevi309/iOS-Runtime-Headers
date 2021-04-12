/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRExternalDeviceController.h>
#import <libobjc.A.dylib/MRExternalDeviceControllerDelegate.h>

@class _MRTelevisionControllerBlockCallback, NSString;

@interface MRTelevisionController : MRExternalDeviceController <MRExternalDeviceControllerDelegate> {

	_MRTelevisionControllerBlockCallback* _discoveryCallback;
	_MRTelevisionControllerBlockCallback* _removalCallback;

}

@property (nonatomic,retain) _MRTelevisionControllerBlockCallback * discoveryCallback;              //@synthesize discoveryCallback=_discoveryCallback - In the implementation block
@property (nonatomic,retain) _MRTelevisionControllerBlockCallback * removalCallback;                //@synthesize removalCallback=_removalCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)externalDeviceClass;
-(id)init;
-(void)externalDeviceController:(id)arg1 didRemoveDevice:(id)arg2 ;
-(void)externalDeviceController:(id)arg1 didDiscoverDevice:(id)arg2 ;
-(_MRTelevisionControllerBlockCallback *)discoveryCallback;
-(void)setDiscoveryCallback:(_MRTelevisionControllerBlockCallback *)arg1 ;
-(_MRTelevisionControllerBlockCallback *)removalCallback;
-(void)setRemovalCallback:(_MRTelevisionControllerBlockCallback *)arg1 ;
@end

