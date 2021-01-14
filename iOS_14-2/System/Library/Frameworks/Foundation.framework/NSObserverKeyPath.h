/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finishObserving;
-(void)_receiveBox:(id)arg1 ;
-(void)setObservation:(id)arg1 ;
-(NSString *)description;
@end

