/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/_NSConcreteObservation.h>
#import <libobjc.A.dylib/NSOwningObserver.h>
#import <libobjc.A.dylib/NSObservable.h>

@class NSObservation, NSString;

@interface _NSOwningMappingObservation : _NSConcreteObservation <NSOwningObserver, NSObservable> {

	NSObservation* _ownedObservation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObservation:(id)arg1 ;
@end

