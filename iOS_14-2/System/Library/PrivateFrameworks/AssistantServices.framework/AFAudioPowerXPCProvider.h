/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFAudioPowerProviding.h>

@class AFXPCWrapper, _AFAudioPowerXPCSharedMemory, NSString;

@interface AFAudioPowerXPCProvider : NSObject <AFAudioPowerProviding> {

	AFXPCWrapper* _wrapper;
	_AFAudioPowerXPCSharedMemory* _sharedMemory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCWrapper:(id)arg1 ;
-(void)didEndAccessPower;
-(void)willBeginAccessPower;
-(BOOL)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2 ;
@end

