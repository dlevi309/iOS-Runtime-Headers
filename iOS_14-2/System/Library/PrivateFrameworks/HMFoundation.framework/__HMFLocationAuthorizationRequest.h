/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithType:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithTimeout:(double)arg1 ;
-(void)main;
-(long long)type;
-(void)dealloc;
-(id)initWithType:(long long)arg1 authorization:(id)arg2 ;
-(id)initWithAuthorization:(id)arg1 ;
@end

