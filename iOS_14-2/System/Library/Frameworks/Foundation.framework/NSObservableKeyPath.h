/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<NSObservable>)changes;
-(id)addObserver:(id)arg1 ;
-(BOOL)_wantsChanges;
-(void)removeObservation:(id)arg1 ;
-(NSString *)description;
@end

