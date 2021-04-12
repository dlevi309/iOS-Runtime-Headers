/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVInterfaceCreating.h>

@protocol TVInterfaceCreating;
@class NSMutableDictionary, TVMLViewFactory, _TVLockupFactory, _TVControllerFactory, _TVTemplateFactory, TVStyleSheetRegistry, NSString;

@interface TVInterfaceFactory : NSObject <TVInterfaceCreating> {

	struct {
		unsigned respondsToViewForElement : 1;
		unsigned respondsToViewControllerForElement : 1;
		unsigned respondsToURLForResource : 1;
		unsigned respondsToImageForResource : 1;
		unsigned respondsToCollectionViewCellClassForElement : 1;
		unsigned respondsToPlayerViewControllerForPlayer : 1;
		unsigned respondsToViewForIKElement : 1;
		unsigned respondsToViewControllerForIKElement : 1;
		unsigned respondsToCollectionViewCellClassForIKElement : 1;
		unsigned respondsToParseAppConfigutaionForElement : 1;
		unsigned respondsToParseAppConfigutaionForIKElement : 1;
		unsigned respondsToImageProxyForIKElement : 1;
		unsigned respondsToImageProxyForElement : 1;
		unsigned respondsToStyleSheetURLForTemplate : 1;
		unsigned respondsToNavigationControllerForTabIdentifier : 1;
	}  _extenderFlags;
	NSMutableDictionary* _viewCreatorsByKey;
	NSMutableDictionary* _viewControllerCreatorsByKey;
	NSMutableDictionary* _controllerTransitionCreatorsByKey;
	TVMLViewFactory* _viewFactory;
	_TVLockupFactory* _lockupFactory;
	_TVControllerFactory* _controllerFactory;
	_TVTemplateFactory* _templateFactory;
	TVStyleSheetRegistry* _styleSheetRegistry;
	id<TVInterfaceCreating> _extendedInterfaceCreator;

}

@property (nonatomic,readonly) TVStyleSheetRegistry * styleSheetRegistry;                   //@synthesize styleSheetRegistry=_styleSheetRegistry - In the implementation block
@property (nonatomic,retain) id<TVInterfaceCreating> extendedInterfaceCreator;              //@synthesize extendedInterfaceCreator=_extendedInterfaceCreator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedInterfaceFactory;
+(id)_tvmlResourceMap;
+(id)_URLForResource:(id)arg1 bundle:(id)arg2 ;
-(void)setup;
-(id)init;
-(id)URLForResource:(id)arg1 ;
-(id)imageForResource:(id)arg1 ;
-(void)dealloc;
-(id)_viewControllerFromElement:(id)arg1 existingController:(id)arg2 ;
-(id)_viewFromElement:(id)arg1 existingView:(id)arg2 ;
-(id)_resourceImageNamed:(id)arg1 ;
-(id)_viewFromElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
-(id)_styleSheetURLForTemplate:(id)arg1 ;
-(TVStyleSheetRegistry *)styleSheetRegistry;
-(id)viewForElement:(id)arg1 existingView:(id)arg2 ;
-(id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2 ;
-(Class)collectionViewCellClassForElement:(id)arg1 ;
-(void)setExtendedInterfaceCreator:(id<TVInterfaceCreating>)arg1 ;
-(id)_navigationControllerForTabIdentifier:(id)arg1 ;
-(id)playerViewControllerForPlayer:(id)arg1 ;
-(void)_registerViewControllerCreator:(/*^block*/id)arg1 withType:(unsigned long long)arg2 ;
-(void)_registerViewControllerCreatorEx:(/*^block*/id)arg1 withType:(unsigned long long)arg2 ;
-(void)_darkerSystemColorStatusChanged:(id)arg1 ;
-(id)_controllerTransitionFromElement:(id)arg1 toElement:(id)arg2 forNavigationControllerOperation:(long long)arg3 relativeToFrom:(BOOL)arg4 ;
-(void)_willParseAppDocument:(id)arg1 forImplicitUpdates:(BOOL)arg2 ;
-(Class)_collectionViewCellClassForElement:(id)arg1 ;
-(id)_viewControllerFromElement:(id)arg1 layout:(id)arg2 existingController:(id)arg3 ;
-(id<TVInterfaceCreating>)extendedInterfaceCreator;
-(id)_getImageFromURLorBundle:(id)arg1 ;
-(void)_registerViewCreatorEx:(/*^block*/id)arg1 withType:(unsigned long long)arg2 ;
-(Class)_extendedCollectionViewCellClassForIKElement:(id)arg1 ;
-(id)_imageProxyFromElement:(id)arg1 withLayout:(id)arg2 ;
-(void)_registerViewCreator:(/*^block*/id)arg1 withType:(unsigned long long)arg2 ;
-(void)_registerProductTemplateURL:(id)arg1 forTemplateName:(id)arg2 includeParentStyleSheets:(BOOL)arg3 ;
-(id)_imageProxyFromElement:(id)arg1 ;
-(id)_imageProxyForResourceURL:(id)arg1 scaleToSize:(CGSize)arg2 ;
-(id)_imageProxyForSymbolURL:(id)arg1 imageSymbolConfiguration:(id)arg2 scaleToSize:(CGSize)arg3 ;
-(void)_registerControllerTransitioningCreator:(/*^block*/id)arg1 withType:(unsigned long long)arg2 ;
@end
