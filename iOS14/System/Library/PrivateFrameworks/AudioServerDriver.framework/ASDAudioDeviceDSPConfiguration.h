/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/


@class NSString, NSSet, NSArray;

@interface ASDAudioDeviceDSPConfiguration : NSObject {

	NSString* _name;
	NSSet* _underlyingDeviceProperties;
	NSSet* _dspDeviceProperties;
	NSArray* _inputDSP;
	NSArray* _outputDSP;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSSet * underlyingDeviceProperties;              //@synthesize underlyingDeviceProperties=_underlyingDeviceProperties - In the implementation block
@property (nonatomic,readonly) NSSet * dspDeviceProperties;                     //@synthesize dspDeviceProperties=_dspDeviceProperties - In the implementation block
@property (nonatomic,readonly) NSArray * inputDSP;                              //@synthesize inputDSP=_inputDSP - In the implementation block
@property (nonatomic,readonly) NSArray * outputDSP;                             //@synthesize outputDSP=_outputDSP - In the implementation block
-(NSString *)name;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)underlyingDeviceProperties;
-(NSSet *)dspDeviceProperties;
-(NSArray *)inputDSP;
-(NSArray *)outputDSP;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 name:(id)arg3 ;
@end

