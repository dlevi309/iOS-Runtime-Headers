/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@class NSArray;

@interface TSTimeErrorSequence : NSObject {

	NSArray* _timeErrors;

}

@property (nonatomic,copy,readonly) NSArray * timeErrors;              //@synthesize timeErrors=_timeErrors - In the implementation block
+(id)timeErrorSequenceWithTimestamps:(unsigned long long*)arg1 timeError:(long long*)arg2 count:(long long)arg3 ;
-(NSArray *)timeErrors;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg1 withFilename:(id)arg2 ;
-(id)generatePythonScriptWithOutputPath:(id)arg1 fileName:(id)arg2 titleName:(id)arg3 plotPath:(id)arg4 showPlot:(BOOL)arg5 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg1 ;
-(id)initWithTimeErrors:(id)arg1 ;
@end

