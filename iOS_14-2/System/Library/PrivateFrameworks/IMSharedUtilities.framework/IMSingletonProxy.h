/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <Foundation/NSProxy.h>

@interface IMSingletonProxy : NSProxy {

	id _singleton;
	id _singletonOverride;
	Class _overrideClass;

}
+(void)load;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)__isSingletonProxy__im;
-(id)initWithSingleton:(id)arg1 singletonOverride:(id)arg2 ;
-(id)singletonOverrideRef;
-(void)setSingletonOverride:(id)arg1 ;
-(id)singletonRef;
-(void)forwardInvocation:(id)arg1 ;
@end

