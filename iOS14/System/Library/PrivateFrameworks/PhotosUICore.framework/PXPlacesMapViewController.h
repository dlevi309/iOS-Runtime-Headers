/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXPlacesMapControllerAccess.h>

@class PXPlacesMapController, PKExtendedTraitCollection, NSString;

@interface PXPlacesMapViewController : UIViewController <PXChangeObserver, PXPlacesMapControllerAccess> {

	PXPlacesMapController* _mapController;

}

@property (nonatomic,retain) PXPlacesMapController * mapController;                                 //@synthesize mapController=_mapController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PKExtendedTraitCollection * pk_extendedTraitCollection; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(PXPlacesMapController *)mapController;
-(PKExtendedTraitCollection *)pk_extendedTraitCollection;
-(void)sendTraitNotification;
-(void)setMapController:(PXPlacesMapController *)arg1 ;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

