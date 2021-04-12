/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@interface _AFAudioPowerXPCSharedMemory : NSObject {

	unsigned long long _mappedLength;
	void* _sharedRegion;

}

@property (nonatomic,readonly) float averagePower; 
@property (nonatomic,readonly) float peakPower; 
-(void)dealloc;
-(float)averagePower;
-(id)initWithXPCObject:(id)arg1 ;
-(void)_destroyMapping;
-(float)peakPower;
@end

