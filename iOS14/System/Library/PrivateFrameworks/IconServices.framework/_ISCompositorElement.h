/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <libobjc.A.dylib/ISCompositorElement.h>
#import <libobjc.A.dylib/ISCompositorResourceProvider.h>

@protocol ISCompositorRecipe;
@class NSMutableDictionary, NSString;

@interface _ISCompositorElement : NSObject <ISCompositorElement, ISCompositorResourceProvider> {

	id<ISCompositorRecipe> _recipe;
	NSMutableDictionary* _resourceByName;

}

@property (retain) id<ISCompositorRecipe> recipe;                                    //@synthesize recipe=_recipe - In the implementation block
@property (readonly) NSMutableDictionary * resourceByName;                           //@synthesize resourceByName=_resourceByName - In the implementation block
@property (readonly) id<ISCompositorResourceProvider> resourceProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResource:(id)arg1 forName:(id)arg2 ;
-(id<ISCompositorRecipe>)recipe;
-(void)setRecipe:(id<ISCompositorRecipe>)arg1 ;
-(id)init;
-(NSMutableDictionary *)resourceByName;
-(void)addResourcesFromDictionary:(id)arg1 ;
-(void)clearResources;
-(id<ISCompositorResourceProvider>)resourceProvider;
-(id)resourceNamed:(id)arg1 ;
-(id)initWithRecipe:(id)arg1 resources:(id)arg2 ;
@end

