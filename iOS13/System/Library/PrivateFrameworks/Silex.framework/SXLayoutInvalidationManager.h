/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SXLayoutInvalidationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SXLayoutInvalidationManagerDelegate>)delegate;
-(void)setDelegate:(id<SXLayoutInvalidationManagerDelegate>)arg1 ;
-(void)mightInvalidateComponent:(id)arg1 ;
-(void)cancelPendingInvalidationForComponent:(id)arg1 ;
-(id)invalidateComponent:(id)arg1 ;
-(id)invalidateComponent:(id)arg1 suggestedSize:(CGSize)arg2 ;
-(id)invalidateComponent:(id)arg1 suggestedSize:(CGSize)arg2 priority:(unsigned long long)arg3 ;
-(id)initWithBlueprintProvider:(id)arg1 ;
-(NSMutableArray *)possibleInvalidations;
-(NSMutableDictionary *)pendingInvalidations;
-(void)invalidateQueuedComponents;
-(id<SXLayoutBlueprintProvider>)layoutBlueprintProvider;
-(BOOL)invalidationDispatched;
-(void)setInvalidationDispatched:(BOOL)arg1 ;
-(void)setPendingInvalidations:(NSMutableDictionary *)arg1 ;
@end

