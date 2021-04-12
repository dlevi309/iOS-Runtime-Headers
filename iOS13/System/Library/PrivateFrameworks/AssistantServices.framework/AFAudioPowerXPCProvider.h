/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)willBeginAccessPower;
-(BOOL)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2 ;
-(void)didEndAccessPower;
@end

