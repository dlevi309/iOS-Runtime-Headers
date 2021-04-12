/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentInteractionHandlerManager.h>

@protocol SXComponentInteractionHandlerManager <NSObject>
@required
-(void)addInteractionHandler:(id)arg1 componentView:(id)arg2 types:(unsigned long long)arg3;
-(void)removeInteractionHandler:(id)arg1 componentView:(id)arg2;
-(id)componentViewForLocation:(CGPoint)arg1;
-(id)interactionsForComponentView:(id)arg1;
-(id)interactionsForComponentView:(id)arg1 type:(unsigned long long)arg2;

@end


@class NSMapTable, NSString;

@interface SXComponentInteractionHandlerManager : NSObject <SXComponentInteractionHandlerManager> {

	NSMapTable* _interactionHandlers;

}

@property (nonatomic,readonly) NSMapTable * interactionHandlers;              //@synthesize interactionHandlers=_interactionHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMapTable *)interactionHandlers;
-(void)addInteractionHandler:(id)arg1 componentView:(id)arg2 types:(unsigned long long)arg3 ;
-(void)removeInteractionHandler:(id)arg1 componentView:(id)arg2 ;
-(id)componentViewForLocation:(CGPoint)arg1 ;
-(id)interactionsForComponentView:(id)arg1 ;
-(id)interactionsForComponentView:(id)arg1 type:(unsigned long long)arg2 ;
-(void)updateUserInteractionForComponentView:(id)arg1 ;
@end

