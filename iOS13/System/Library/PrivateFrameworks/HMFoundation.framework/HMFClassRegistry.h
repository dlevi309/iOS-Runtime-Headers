/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSMutableDictionary;

@interface HMFClassRegistry : HMFObject {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _classes;
	Class _defaultClass;

}

@property (readonly) Class defaultClass;              //@synthesize defaultClass=_defaultClass - In the implementation block
-(id)init;
-(id)initWithDefaultClass:(Class)arg1 ;
-(Class)classForKey:(id)arg1 ;
-(void)setClass:(Class)arg1 forKey:(id)arg2 ;
-(Class)defaultClass;
@end

