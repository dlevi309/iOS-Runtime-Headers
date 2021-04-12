/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)__isSingletonProxy__im;
-(id)initWithSingleton:(id)arg1 singletonOverride:(id)arg2 ;
-(id)singletonOverrideRef;
-(void)setSingletonOverride:(id)arg1 ;
-(id)singletonRef;
@end

