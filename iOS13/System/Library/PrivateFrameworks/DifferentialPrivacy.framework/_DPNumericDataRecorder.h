/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@protocol _DPDataRecorder_DPDataRecorderKeyProperties;
@interface _DPNumericDataRecorder : NSObject {

	id<_DPDataRecorder><_DPDataRecorderKeyProperties> _recorder;

}

@property (nonatomic,readonly) id<_DPDataRecorder><_DPDataRecorderKeyProperties> recorder;              //@synthesize recorder=_recorder - In the implementation block
-(id)init;
-(id)description;
-(id)initWithKey:(id)arg1 ;
-(BOOL)record:(id)arg1 ;
-(id<_DPDataRecorder><_DPDataRecorderKeyProperties>)recorder;
-(id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(BOOL)arg3 ;
@end

