/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface CSDispatchGroup : NSObject {

	NSObject*<OS_dispatch_group> _dispatchGroup;
	int _dispatchGroupCounter;

}
-(id)init;
-(long long)waitWithTimeout:(unsigned long long)arg1 ;
-(void)enter;
-(void)leave;
@end

