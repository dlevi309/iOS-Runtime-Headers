/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)progress;
-(NSString *)taskIdentifier;
-(BOOL)completed;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)updateFromDownloadStatusUserInfo:(id)arg1 ;
-(NSString *)resourceTypeDescription;
-(void)setResourceTypeDescription:(NSString *)arg1 ;
-(double)updateLastQueuedTime;
-(void)setUpdateLastQueuedTime:(double)arg1 ;
@end

