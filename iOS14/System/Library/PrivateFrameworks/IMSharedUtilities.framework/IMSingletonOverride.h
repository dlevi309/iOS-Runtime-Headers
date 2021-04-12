/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSingletonOverriding.h>

@class NSString;

@interface IMSingletonOverride : NSObject <IMSingletonOverriding> {

	id _overriddenSingleton;

}

@property (__weak) id overriddenSingleton;                          //@synthesize overriddenSingleton=_overriddenSingleton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)overriddenSingleton;
-(void)setOverriddenSingleton:(id)arg1 ;
-(void)didOverrideSingleton:(id)arg1 ;
-(BOOL)shouldInvokeSelector:(SEL)arg1 onSingleton:(id)arg2 ;
@end

