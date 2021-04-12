/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <libobjc.A.dylib/AXImageMonitor.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSString;

@interface _AXDyldImageMonitor : NSObject <AXImageMonitor> {

	NSHashTable* _imageMonitorObservers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addImageMonitorObserver:(id)arg1 ;
-(void)removeImageMonitorObserver:(id)arg1 ;
-(id)loadedImagePaths;
-(void)enumerateLoadedImagePaths:(/*^block*/id)arg1 ;
-(void)_dyldDidAddImage:(id)arg1 ;
@end

