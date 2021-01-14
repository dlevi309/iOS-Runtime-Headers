/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSArray, _MXExtensionMatchingMerger, _MXExtensionDispatchCenter, _MXExtensionServiceCenter, _MXAssetStorage;

@interface _MXExtensionProvider : NSObject {

	Class _extensionMatchingClass;
	id _matchingContext;
	id _intentNonUIMatchingContext;
	id _intentUIMatchingContext;
	NSArray* _blacklistedExtensions;
	NSArray* _blacklistedContainingApplications;
	_MXExtensionMatchingMerger* _merger;
	_MXExtensionDispatchCenter* _dispatchCenter;
	_MXExtensionServiceCenter* _serviceCenter;
	_MXAssetStorage* _assetStorage;

}

@property (nonatomic,retain) _MXExtensionMatchingMerger * merger;                      //@synthesize merger=_merger - In the implementation block
@property (nonatomic,retain) _MXExtensionDispatchCenter * dispatchCenter;              //@synthesize dispatchCenter=_dispatchCenter - In the implementation block
@property (nonatomic,retain) _MXExtensionServiceCenter * serviceCenter;                //@synthesize serviceCenter=_serviceCenter - In the implementation block
@property (nonatomic,retain) _MXAssetStorage * assetStorage;                           //@synthesize assetStorage=_assetStorage - In the implementation block
+(id)sharedProvider;
-(id)init;
-(id)_intentClassFilter:(id)arg1 ;
-(void)setMerger:(_MXExtensionMatchingMerger *)arg1 ;
-(_MXExtensionDispatchCenter *)dispatchCenter;
-(BOOL)_disableExtension:(id)arg1 error:(id*)arg2 ;
-(id)_currentExtensions;
-(id)_extensionsByFilteringBlacklistedExtensionsFromArray:(id)arg1 ;
-(void)setAssetStorage:(_MXAssetStorage *)arg1 ;
-(void)setDispatchCenter:(_MXExtensionDispatchCenter *)arg1 ;
-(id)_extensionWithIdentifier:(id)arg1 ;
-(void)imageForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(_MXAssetStorage *)assetStorage;
-(void)_endMatchingExtensionsIfNeeded;
-(void)imageForKey:(id)arg1 extension:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_restartMatchingExtensionsForDefaultsChange;
-(void)_beginMatchingExtensionsIfNeeded;
-(void)setServiceCenter:(_MXExtensionServiceCenter *)arg1 ;
-(_MXExtensionMatchingMerger *)merger;
-(void)loadImageForKey:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)addExtensionsUpdateHandler:(/*^block*/id)arg1 ;
-(id)siblingExtensionsWithContainingAppIdentifer:(id)arg1 ;
-(_MXExtensionServiceCenter *)serviceCenter;
-(BOOL)_enableExtension:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)removeExtensionUpdateHandler:(id)arg1 ;
@end

