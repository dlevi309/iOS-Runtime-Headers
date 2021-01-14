/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWNavigationManager.h>

@protocol SWNavigationManager <NSObject>
@required
-(void)addObserver:(id)arg1;
-(void)registerHandler:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)commitViewController:(id)arg1;
-(unsigned long long)actionForRequest:(id)arg1;
-(id)previewViewControllerForRequest:(id)arg1;
-(BOOL)shouldPreviewRequest:(id)arg1;
-(void)registerHandler:(id)arg1 scheme:(id)arg2;
-(void)registerHandler:(id)arg1 extension:(id)arg2;

@end


@class NSMutableArray, NSMutableDictionary, NSMutableSet, SWNavigationPreview, NSString;

@interface SWNavigationManager : NSObject <SWNavigationManager> {

	NSMutableArray* _handlers;
	NSMutableDictionary* _schemeHandlers;
	NSMutableDictionary* _extensionHandlers;
	NSMutableSet* _observers;
	SWNavigationPreview* _currentPreview;

}

@property (nonatomic,readonly) NSMutableArray * handlers;                            //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * schemeHandlers;                 //@synthesize schemeHandlers=_schemeHandlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * extensionHandlers;              //@synthesize extensionHandlers=_extensionHandlers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * observers;                             //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) SWNavigationPreview * currentPreview;                   //@synthesize currentPreview=_currentPreview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)handlers;
-(void)addObserver:(id)arg1 ;
-(NSMutableSet *)observers;
-(id)init;
-(void)registerHandler:(id)arg1 ;
-(void)setCurrentPreview:(SWNavigationPreview *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)commitViewController:(id)arg1 ;
-(SWNavigationPreview *)currentPreview;
-(unsigned long long)actionForRequest:(id)arg1 ;
-(id)previewViewControllerForRequest:(id)arg1 ;
-(BOOL)shouldPreviewRequest:(id)arg1 ;
-(void)registerHandler:(id)arg1 scheme:(id)arg2 ;
-(void)registerHandler:(id)arg1 extension:(id)arg2 ;
-(NSMutableDictionary *)extensionHandlers;
-(NSMutableDictionary *)schemeHandlers;
@end

