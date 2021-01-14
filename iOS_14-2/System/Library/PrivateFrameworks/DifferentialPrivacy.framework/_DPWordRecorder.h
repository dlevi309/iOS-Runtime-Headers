/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@protocol _DPDataRecorder_DPDataRecorderKeyProperties;
@interface _DPWordRecorder : NSObject {

	unsigned long long _wordFragmentWidth;
	id<_DPDataRecorder><_DPDataRecorderKeyProperties> _recorder;

}

@property (nonatomic,readonly) id<_DPDataRecorder><_DPDataRecorderKeyProperties> recorder;              //@synthesize recorder=_recorder - In the implementation block
@property (nonatomic,readonly) unsigned long long wordFragmentWidth;                                    //@synthesize wordFragmentWidth=_wordFragmentWidth - In the implementation block
-(id)init;
-(id)initWithKey:(id)arg1 ;
-(BOOL)record:(id)arg1 ;
-(id)description;
-(id<_DPDataRecorder><_DPDataRecorderKeyProperties>)recorder;
-(unsigned long long)wordFragmentWidth;
-(id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(BOOL)arg3 ;
@end

