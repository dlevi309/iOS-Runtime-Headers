/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInteractionHandlerManager.h>

@protocol SXComponentInteractionHandlerManager <NSObject>
@required
-(id)interactionsForComponentView:(id)arg1;
-(void)addInteractionHandler:(id)arg1 componentView:(id)arg2 types:(unsigned long long)arg3;
-(void)removeInteractionHandler:(id)arg1 componentView:(id)arg2;
-(id)componentViewForLocation:(CGPoint)arg1;
-(id)interactionsForComponentView:(id)arg1 type:(unsigned long long)arg2;

@end


@class NSMapTable, SXViewport, NSString;

@interface SXComponentInteractionHandlerManager : NSObject <SXComponentInteractionHandlerManager> {

	NSMapTable* _interactionHandlers;
	SXViewport* _viewport;

}

@property (nonatomic,readonly) NSMapTable * interactionHandlers;              //@synthesize interactionHandlers=_interactionHandlers - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                         //@synthesize viewport=_viewport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewport:(id)arg1 ;
-(SXViewport *)viewport;
-(id)interactionsForComponentView:(id)arg1 ;
-(void)addInteractionHandler:(id)arg1 componentView:(id)arg2 types:(unsigned long long)arg3 ;
-(void)removeInteractionHandler:(id)arg1 componentView:(id)arg2 ;
-(id)componentViewForLocation:(CGPoint)arg1 ;
-(id)interactionsForComponentView:(id)arg1 type:(unsigned long long)arg2 ;
-(void)updateUserInteractionForComponentView:(id)arg1 ;
-(NSMapTable *)interactionHandlers;
@end

