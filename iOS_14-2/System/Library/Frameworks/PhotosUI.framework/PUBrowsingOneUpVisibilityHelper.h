/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@class PUBrowsingViewModel, NSString;

@interface PUBrowsingOneUpVisibilityHelper : NSObject <PUBrowsingViewModelChangeObserver> {

	BOOL _isOneUpVisible;
	BOOL _isPresentedForSecondScreen;
	PUBrowsingViewModel* _browsingViewModel;

}

@property (nonatomic,retain) PUBrowsingViewModel * browsingViewModel;              //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (assign,nonatomic) BOOL isOneUpVisible;                                  //@synthesize isOneUpVisible=_isOneUpVisible - In the implementation block
@property (nonatomic,readonly) BOOL isPresentedForSecondScreen;                    //@synthesize isPresentedForSecondScreen=_isPresentedForSecondScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_performOnDemandCameraProcessingAdjustmentIfNeeded:(id)arg1 ;
+(BOOL)_shouldPerformOnDemandCameraProcessingAdjustment:(id)arg1 isOneUpVisible:(BOOL)arg2 isPresentedForSecondScreen:(BOOL)arg3 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)isPresentedForSecondScreen;
-(void)setIsOneUpVisible:(BOOL)arg1 ;
-(PUBrowsingViewModel *)browsingViewModel;
-(id)initWithBrowsingViewModel:(id)arg1 isPresentedForSecondScreen:(BOOL)arg2 ;
-(void)setBrowsingViewModel:(PUBrowsingViewModel *)arg1 ;
-(BOOL)isOneUpVisible;
-(void)dealloc;
@end

