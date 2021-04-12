/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSBoundKeyPath.h>
#import <libobjc.A.dylib/NSObservable.h>

@class NSString;

@interface NSObservableKeyPath : NSBoundKeyPath <NSObservable>

@property (readonly) id<NSObservable> changes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)addObserver:(id)arg1 ;
-(void)removeObservation:(id)arg1 ;
-(id<NSObservable>)changes;
-(BOOL)_wantsChanges;
@end

