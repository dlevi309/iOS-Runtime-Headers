/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/FBSDisplayObserving.h>

@class NSMutableDictionary, FBSDisplayMonitor, NSString;

@interface _UISystemGestureManager : NSObject <UIGestureRecognizerDelegate, FBSDisplayObserving> {

	NSMutableDictionary* _displayIdentityToManagerMap;
	FBSDisplayMonitor* _displayMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_sharedInstanceIfExists;
+(void)_cancelTouchesWithIdentifiers:(id)arg1 forDisplayWithIdentity:(id)arg2 ;
-(id)init;
-(void)setTransform:(CGAffineTransform)arg1 onDisplayWithIdentity:(id)arg2 ;
-(void)addGestureRecognizer:(id)arg1 toDisplayWithIdentity:(id)arg2 ;
-(void)clearTransformFromDisplayWithIdentity:(id)arg1 ;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(id)_systemGestureManagerForDisplayWithIdentityCreatingIfNeeded:(id)arg1 ;
-(NSString *)description;
-(id)windowForSystemGesturesForDisplayWithIdentity:(id)arg1 ;
-(void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2 toDisplayWithIdentity:(id)arg3 ;
-(void)removeGestureRecognizer:(id)arg1 fromDisplayWithIdentity:(id)arg2 ;
-(void)dealloc;
@end

