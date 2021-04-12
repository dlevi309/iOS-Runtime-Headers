/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSString, NSError;

@interface PLCPLDownloadContext : NSObject {

	BOOL _completed;
	NSString* _taskIdentifier;
	NSString* _resourceTypeDescription;
	double _progress;
	NSError* _error;
	double _updateLastQueuedTime;

}

@property (retain) NSString * taskIdentifier;                       //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (retain) NSString * resourceTypeDescription;              //@synthesize resourceTypeDescription=_resourceTypeDescription - In the implementation block
@property (assign) double progress;                                 //@synthesize progress=_progress - In the implementation block
@property (assign) BOOL completed;                                  //@synthesize completed=_completed - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (assign) double updateLastQueuedTime;                     //@synthesize updateLastQueuedTime=_updateLastQueuedTime - In the implementation block
-(double)progress;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(BOOL)completed;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)taskIdentifier;
-(void)setProgress:(double)arg1 ;
-(void)updateFromDownloadStatusUserInfo:(id)arg1 ;
-(NSString *)resourceTypeDescription;
-(void)setResourceTypeDescription:(NSString *)arg1 ;
-(double)updateLastQueuedTime;
-(void)setUpdateLastQueuedTime:(double)arg1 ;
@end

