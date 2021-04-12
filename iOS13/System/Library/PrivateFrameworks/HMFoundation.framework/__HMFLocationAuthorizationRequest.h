/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/__HMFLocationManagerOperation.h>
#import <HMFoundation/HMFLogging.h>

@class NSString;

@interface __HMFLocationAuthorizationRequest : __HMFLocationManagerOperation <HMFLogging> {

	BOOL _requested;
	long long _type;

}

@property (readonly) long long type;                                //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(long long)type;
-(void)main;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithType:(long long)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
-(id)initWithType:(long long)arg1 authorization:(id)arg2 ;
-(id)initWithAuthorization:(id)arg1 ;
@end

