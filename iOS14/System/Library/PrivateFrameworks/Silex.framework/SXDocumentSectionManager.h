/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXDocumentSectionManager.h>

@protocol SXDocumentSectionManager <NSObject>
@required
-(void)applySectionBlueprint:(id)arg1 identifier:(id)arg2 offset:(CGPoint)arg3 size:(CGSize)arg4;
-(double)heightForBlueprint:(id)arg1 canvasSize:(CGSize)arg2 traitCollection:(id)arg3;

@end


@protocol SXDocumentSectionHosting;
@class SXViewport, NSMutableDictionary, NSMutableSet, NFMultiDelegate, NSString;

@interface SXDocumentSectionManager : NSObject <SXViewportChangeListener, SXDocumentSectionManager> {

	id<SXDocumentSectionHosting> _hosting;
	SXViewport* _viewport;
	NSMutableDictionary* _blueprints;
	NSMutableSet* _visibleViewControllers;
	NFMultiDelegate* _multiScrollDelegate;

}

@property (nonatomic,__weak,readonly) id<SXDocumentSectionHosting> hosting;              //@synthesize hosting=_hosting - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                    //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * blueprints;                         //@synthesize blueprints=_blueprints - In the implementation block
@property (nonatomic,readonly) NSMutableSet * visibleViewControllers;                    //@synthesize visibleViewControllers=_visibleViewControllers - In the implementation block
@property (nonatomic,readonly) NFMultiDelegate * multiScrollDelegate;                    //@synthesize multiScrollDelegate=_multiScrollDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(NSMutableDictionary *)blueprints;
-(void)performDisappearanceTransitionForVisibleViewControllers;
-(void)applySectionBlueprint:(id)arg1 identifier:(id)arg2 offset:(CGPoint)arg3 size:(CGSize)arg4 ;
-(id)initWithSectionHosting:(id)arg1 viewport:(id)arg2 appStateMonitor:(id)arg3 ;
-(double)heightForBlueprint:(id)arg1 canvasSize:(CGSize)arg2 traitCollection:(id)arg3 ;
-(void)viewport:(id)arg1 documentSizeDidChangeFromSize:(CGSize)arg2 ;
-(NFMultiDelegate *)multiScrollDelegate;
-(id)view;
-(id)viewController;
-(NSMutableSet *)visibleViewControllers;
-(void)updateViewControllerVisibility;
-(void)endImpressions;
-(id<SXDocumentSectionHosting>)hosting;
@end

