/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class NSString, NSNumber;

@interface VNClustererContextBase : NSObject {

	NSString* _type;
	NSNumber* _threshold;
	NSNumber* _torsoThreshold;
	NSString* _cacheDirectoryPath;
	BOOL _readOnly;
	unsigned long long _requestRevision;

}
+(id)_faceprintRevision1ModelPathAndReturnError:(id*)arg1 ;
+(id)_faceprintRevision2ModelPathAndReturnError:(id*)arg1 ;
+(id)_ageClassifierPathForFaceprintRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)_checkInitInputs:(id)arg1 cachePath:(id)arg2 checkType:(id)arg3 requestRevision:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(BOOL)arg4 threshold:(float)arg5 requestRevision:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(BOOL)arg4 threshold:(float)arg5 torsoThreshold:(float)arg6 requestRevision:(unsigned long long)arg7 error:(id*)arg8 ;
-(id)_createGreedyClusterer:(Class)arg1 state:(id)arg2 error:(id*)arg3 ;
-(void)_initializeGreedyClustererOptions:(id)arg1 ;
@end

