/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


@protocol TRIPaths;
@class NSString;

@interface TRILogTreatmentReader : NSObject {

	int _projectId;
	id<TRIPaths> _paths;

}

@property (readonly) NSString * path; 
+(id)readerWithProjectId:(int)arg1 paths:(id)arg2 ;
-(id)treatments;
-(id)fetchRolloutLogNamespaces;
-(NSString *)path;
-(id)namespaceLoggingTreatmentPath;
-(id)initWithProjectId:(int)arg1 paths:(id)arg2 ;
@end

