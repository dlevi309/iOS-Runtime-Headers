/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXLayoutInvalidationManager.h>

@protocol SXLayoutInvalidationManager <SXLayoutInvalidator>
@property (assign,nonatomic,__weak) id<SXLayoutInvalidationManagerDelegate> delegate; 
@required
-(id<SXLayoutInvalidationManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end


@protocol SXLayoutInvalidationManagerDelegate, SXLayoutBlueprintProvider;
@class NSMutableArray, NSMutableDictionary, NSString;

@interface SXLayoutInvalidationManager : NSObject <SXLayoutInvalidationManager> {

	BOOL _invalidationDispatched;
	id<SXLayoutInvalidationManagerDelegate> _delegate;
	id<SXLayoutBlueprintProvider> _layoutBlueprintProvider;
	NSMutableArray* _possibleInvalidations;
	NSMutableDictionary* _pendingInvalidations;

}

@property (nonatomic,readonly) id<SXLayoutBlueprintProvider> layoutBlueprintProvider;              //@synthesize layoutBlueprintProvider=_layoutBlueprintProvider - In the implementation block
@property (nonatomic,readonly) NSMutableArray * possibleInvalidations;                             //@synthesize possibleInvalidations=_possibleInvalidations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingInvalidations;                           //@synthesize pendingInvalidations=_pendingInvalidations - In the implementation block
@property (assign,nonatomic) BOOL invalidationDispatched;                                          //@synthesize invalidationDispatched=_invalidationDispatched - In the implementation block
@property (assign,nonatomic,__weak) id<SXLayoutInvalidationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateQueuedComponents;
-(void)setPendingInvalidations:(NSMutableDictionary *)arg1 ;
-(id<SXLayoutInvalidationManagerDelegate>)delegate;
-(id)invalidateComponent:(id)arg1 suggestedSize:(CGSize)arg2 ;
-(id)invalidateComponent:(id)arg1 state:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)invalidateComponent:(id)arg1 invalidation:(/*^block*/id)arg2 priority:(unsigned long long)arg3 ;
-(id)invalidateComponent:(id)arg1 suggestedSize:(CGSize)arg2 priority:(unsigned long long)arg3 ;
-(id<SXLayoutBlueprintProvider>)layoutBlueprintProvider;
-(void)setInvalidationDispatched:(BOOL)arg1 ;
-(void)setDelegate:(id<SXLayoutInvalidationManagerDelegate>)arg1 ;
-(id)invalidateComponent:(id)arg1 ;
-(NSMutableArray *)possibleInvalidations;
-(id)invalidateComponent:(id)arg1 state:(id)arg2 ;
-(void)cancelPendingInvalidationForComponent:(id)arg1 ;
-(void)mightInvalidateComponent:(id)arg1 ;
-(NSMutableDictionary *)pendingInvalidations;
-(BOOL)invalidationDispatched;
-(id)invalidateComponent:(id)arg1 state:(id)arg2 suggestedSize:(CGSize)arg3 priority:(unsigned long long)arg4 ;
-(id)initWithBlueprintProvider:(id)arg1 ;
-(id)invalidateComponent:(id)arg1 state:(id)arg2 priority:(unsigned long long)arg3 ;
@end

