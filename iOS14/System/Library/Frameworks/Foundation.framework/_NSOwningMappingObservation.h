/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

