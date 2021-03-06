/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSSet *)underlyingDeviceProperties;
-(NSSet *)dspDeviceProperties;
-(NSArray *)inputDSP;
-(NSArray *)outputDSP;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 name:(id)arg3 ;
@end

