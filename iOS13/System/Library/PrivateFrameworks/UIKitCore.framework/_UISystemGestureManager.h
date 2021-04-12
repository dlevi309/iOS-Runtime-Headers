/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(id)_systemGestureManagerForDisplayWithIdentityCreatingIfNeeded:(id)arg1 ;
-(void)addGestureRecognizer:(id)arg1 toDisplayWithIdentity:(id)arg2 ;
-(void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2 toDisplayWithIdentity:(id)arg3 ;
-(void)removeGestureRecognizer:(id)arg1 fromDisplayWithIdentity:(id)arg2 ;
-(id)windowForSystemGesturesForDisplayWithIdentity:(id)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 onDisplayWithIdentity:(id)arg2 ;
-(void)clearTransformFromDisplayWithIdentity:(id)arg1 ;
@end

