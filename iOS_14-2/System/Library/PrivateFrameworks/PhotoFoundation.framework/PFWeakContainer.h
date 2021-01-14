/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@class _PFWeakContainerSentenal;

@interface PFWeakContainer : NSObject {

	_PFWeakContainerSentenal* _sentenal;
	id _nilNotificationDelegate;

}
-(id)init;
-(void)weakReferenceBecameNil;
-(BOOL)isTrackingWeakObjectDealloc:(id)arg1 ;
-(void)trackWeakObjectDealloc:(id)arg1 ;
-(void)stopTrackingWeakObjectDealloc:(id)arg1 ;
-(void)setNilNotificationDelegate:(id)arg1 ;
-(void)dealloc;
@end

