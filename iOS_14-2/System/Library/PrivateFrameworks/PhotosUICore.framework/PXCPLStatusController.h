/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXCPLUIStatusProvider, PXStatusViewModel, NSString;

@interface PXCPLStatusController : NSObject <PXChangeObserver> {

	PXCPLUIStatusProvider* _statusProvider;
	PXStatusViewModel* _viewModel;
	NSString* _fallbackTitle;
	NSString* _fallbackMessage;
	NSString* _fallbackActionTitle;
	/*^block*/id _fallbackAction;

}

@property (nonatomic,retain) PXCPLUIStatusProvider * statusProvider;              //@synthesize statusProvider=_statusProvider - In the implementation block
@property (nonatomic,copy) NSString * fallbackTitle;                              //@synthesize fallbackTitle=_fallbackTitle - In the implementation block
@property (nonatomic,copy) NSString * fallbackMessage;                            //@synthesize fallbackMessage=_fallbackMessage - In the implementation block
@property (nonatomic,copy) NSString * fallbackActionTitle;                        //@synthesize fallbackActionTitle=_fallbackActionTitle - In the implementation block
@property (nonatomic,copy) id fallbackAction;                                     //@synthesize fallbackAction=_fallbackAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewModel:(id)arg1 ;
-(void)setFallbackTitle:(NSString *)arg1 ;
-(id)init;
-(void)setStatusProvider:(PXCPLUIStatusProvider *)arg1 ;
-(void)setFallbackMessage:(NSString *)arg1 ;
-(void)setFallbackActionTitle:(NSString *)arg1 ;
-(void)setFallbackAction:(id)arg1 ;
-(void)_statusProviderDidChange;
-(PXCPLUIStatusProvider *)statusProvider;
-(NSString *)fallbackTitle;
-(NSString *)fallbackMessage;
-(NSString *)fallbackActionTitle;
-(id)fallbackAction;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

