/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/_CNBufferingStrategy.h>

@class NSString;

@interface _CNSpatialBufferingStrategy : NSObject <_CNBufferingStrategy> {

	unsigned long long _capacity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3 ;
-(void)bufferDidSendResults:(id)arg1 ;
@end

