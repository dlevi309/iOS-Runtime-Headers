/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXCPLStatusProvider;
@class PXCPLActionManager, PXObservable, PXCPLUIStatus, NSString;

@interface PXCPLUIStatusProvider : PXObservable <PXChangeObserver> {

	PXCPLActionManager* _actionManager;
	PXObservable*<PXCPLStatusProvider> _statusProvider;
	PXCPLUIStatus* _status;

}

@property (nonatomic,readonly) PXCPLUIStatus * status;              //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithActionManager:(id)arg1 statusProvider:(id)arg2 ;
-(void)_statusDidChange:(id)arg1 ;
-(void)_updateStatus;
-(id)initWithActionManager:(id)arg1 ;
-(PXCPLUIStatus *)status;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

