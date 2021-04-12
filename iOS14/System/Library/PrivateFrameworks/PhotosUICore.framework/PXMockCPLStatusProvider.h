/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXCPLStatusProvider.h>

@class PXCPLStatus, NSString;

@interface PXMockCPLStatusProvider : PXObservable <PXSettingsKeyObserver, PXCPLStatusProvider> {

	PXCPLStatus* _status;

}

@property (nonatomic,retain) PXCPLStatus * status;                  //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_currentMockedStatus;
+(BOOL)shouldUseMockService;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setStatus:(PXCPLStatus *)arg1 ;
-(void)_updateStatus;
-(PXCPLStatus *)status;
-(void)dealloc;
@end

