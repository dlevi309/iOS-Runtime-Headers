/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSDate, CPLScopeFilter, NSString;

@interface _CPLForcedSyncHistory : NSObject {

	BOOL _discarded;
	NSDate* _creationDate;
	CPLScopeFilter* _filter;
	Class _taskClass;
	NSString* _errorDescription;

}

@property (nonatomic,readonly) BOOL discarded;                           //@synthesize discarded=_discarded - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) CPLScopeFilter * filter;                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) Class taskClass;                          //@synthesize taskClass=_taskClass - In the implementation block
@property (nonatomic,readonly) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
-(CPLScopeFilter *)filter;
-(NSDate *)creationDate;
-(NSString *)errorDescription;
-(BOOL)discarded;
-(Class)taskClass;
-(id)descriptionWithNow:(id)arg1 ;
-(id)initWithForcedSyncTask:(id)arg1 discarded:(BOOL)arg2 error:(id)arg3 ;
@end

