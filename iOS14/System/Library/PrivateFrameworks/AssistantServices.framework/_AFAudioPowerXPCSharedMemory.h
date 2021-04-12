/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@interface _AFAudioPowerXPCSharedMemory : NSObject {

	unsigned long long _mappedLength;
	void* _sharedRegion;

}

@property (nonatomic,readonly) float averagePower; 
@property (nonatomic,readonly) float peakPower; 
-(id)initWithXPCObject:(id)arg1 ;
-(float)peakPower;
-(void)_destroyMapping;
-(float)averagePower;
-(void)dealloc;
@end

