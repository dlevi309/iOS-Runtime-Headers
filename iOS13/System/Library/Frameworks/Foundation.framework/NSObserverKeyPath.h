/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSBoundKeyPath.h>
#import <libobjc.A.dylib/NSOwningObserver.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSString;

@interface NSObserverKeyPath : NSBoundKeyPath <NSOwningObserver, NSObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)_receiveBox:(id)arg1 ;
-(void)finishObserving;
-(void)setObservation:(id)arg1 ;
@end

