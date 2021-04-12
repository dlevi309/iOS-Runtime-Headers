/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/GCKeyboardEventObserverDelegate.h>
#import <libobjc.A.dylib/GCMouseEventObserverDelegate.h>
#import <libobjc.A.dylib/GCFrontmostApplicationObserverDelegate.h>

@protocol GCAppConnectionsFilter;
@class GCKeyboardEventObserver, GCMouseEventObserver, _GCIPCRemoteProcess, GCFrontmostApplicationObserver, NSString;

@interface GCKeyboardAndMouseEventObserver : NSObject <GCKeyboardEventObserverDelegate, GCMouseEventObserverDelegate, GCFrontmostApplicationObserverDelegate> {

	id<GCAppConnectionsFilter> _filter;
	GCKeyboardEventObserver* _keyboardEventObserver;
	GCMouseEventObserver* _mouseEventObserver;
	_GCIPCRemoteProcess* _frontMostClient;
	int _pid;
	GCFrontmostApplicationObserver* _frontmostApplicationObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clientRemoved:(id)arg1 ;
-(void)onMouseEvent:(id)arg1 ;
-(void)onKeyboardEvent:(id)arg1 ;
-(void)clientAdded:(id)arg1 ;
-(id)initWithFilter:(id)arg1 ;
-(void)onFrontmostApplicationChanged:(int)arg1 ;
@end

