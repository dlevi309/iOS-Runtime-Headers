/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/


@class ASDDSPConfiguration;

@interface ASDStreamDSPConfiguration : NSObject {

	ASDDSPConfiguration* _hardwareDSP;

}

@property (nonatomic,readonly) ASDDSPConfiguration * hardwareDSP;              //@synthesize hardwareDSP=_hardwareDSP - In the implementation block
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 ;
-(ASDDSPConfiguration *)hardwareDSP;
@end

