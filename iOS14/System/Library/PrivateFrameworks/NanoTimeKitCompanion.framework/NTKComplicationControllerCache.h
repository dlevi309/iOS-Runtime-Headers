/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKFaceObserver.h>
#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>

@class NSMutableDictionary, NSMapTable, NTKFaceCollection, NSString;

@interface NTKComplicationControllerCache : NSObject <NTKFaceObserver, NTKFaceCollectionObserver> {

	NSMutableDictionary* _controllers;
	NSMutableDictionary* _controllersToOwningFace;
	NSMapTable* _faceToLegacyControllers;
	NTKFaceCollection* _libraryCollection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(id)init;
-(void)_purge;
-(void)dealloc;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setLibraryCollection:(id)arg1 ;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)_removeComplicationsForFace:(id)arg1 ;
-(void)_addComplicationsForFace:(id)arg1 ;
-(void)_updateComplicationsForFace:(id)arg1 ;
-(id)controllerForComplication:(id)arg1 family:(long long)arg2 face:(id)arg3 create:(/*^block*/id)arg4 ;
-(id)legacyControllerForComplication:(id)arg1 face:(id)arg2 slot:(id)arg3 create:(/*^block*/id)arg4 ;
@end

