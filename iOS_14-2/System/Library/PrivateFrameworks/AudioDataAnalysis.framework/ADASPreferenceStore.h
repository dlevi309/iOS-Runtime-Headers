/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioDataAnalysis.framework/AudioDataAnalysis
*/


@class NSDictionary, NPSDomainAccessor;

@interface ADASPreferenceStore : NSObject {

	NSDictionary* _keyMap;
	NSDictionary* _defaultValues;
	NSDictionary* _specialDarwinKeys;
	NPSDomainAccessor* _coreAudioDomain;
	NPSDomainAccessor* _coreAudioDeviceDomain;

}

@property (nonatomic,readonly) NSDictionary * keyMap;                                //@synthesize keyMap=_keyMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultValues;                         //@synthesize defaultValues=_defaultValues - In the implementation block
@property (nonatomic,readonly) NSDictionary * specialDarwinKeys;                     //@synthesize specialDarwinKeys=_specialDarwinKeys - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * coreAudioDomain;                    //@synthesize coreAudioDomain=_coreAudioDomain - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * coreAudioDeviceDomain;              //@synthesize coreAudioDeviceDomain=_coreAudioDeviceDomain - In the implementation block
+(id)sharedInstance;
-(NPSDomainAccessor *)coreAudioDeviceDomain;
-(id)init;
-(NSDictionary *)specialDarwinKeys;
-(NSDictionary *)keyMap;
-(void)setCoreAudioDeviceDomain:(NPSDomainAccessor *)arg1 ;
-(void)setCoreAudioDomain:(NPSDomainAccessor *)arg1 ;
-(NPSDomainAccessor *)coreAudioDomain;
-(NSDictionary *)defaultValues;
@end

