/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/


@class ASDDSPConfiguration;

@interface ASDStreamDSPConfiguration : NSObject {

	ASDDSPConfiguration* _hardwareDSP;

}

@property (nonatomic,readonly) ASDDSPConfiguration * hardwareDSP;              //@synthesize hardwareDSP=_hardwareDSP - In the implementation block
-(ASDDSPConfiguration *)hardwareDSP;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 ;
@end

