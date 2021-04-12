/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/


@class NSString;

@interface DNDEventBehaviorResolutionService : NSObject {

	NSString* _clientIdentifier;

}
+(void)initialize;
+(id)serviceForClientIdentifier:(id)arg1 ;
-(id)resolveBehaviorForEventDetails:(id)arg1 error:(id*)arg2 ;
-(id)_initWithClientIdentifier:(id)arg1 ;
@end

