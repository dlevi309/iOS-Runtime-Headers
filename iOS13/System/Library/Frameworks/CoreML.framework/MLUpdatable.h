/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol MLUpdatable <MLWritable>
@required
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
-(void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
-(void)updateModelWithData:(id)arg1;
-(void)resumeUpdateWithParameters:(id)arg1;
-(void)resumeUpdate;
-(void)cancelUpdate;

@end

