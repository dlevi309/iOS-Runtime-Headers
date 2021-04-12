/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol MLUpdatable <MLWritable>
@required
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
-(void)resumeUpdate;
-(void)cancelUpdate;
-(void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
-(void)updateModelWithData:(id)arg1;
-(void)resumeUpdateWithParameters:(id)arg1;

@end

