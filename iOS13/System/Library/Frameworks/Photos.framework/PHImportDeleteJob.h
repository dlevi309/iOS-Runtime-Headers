/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface PHImportDeleteJob : NSObject {

	BOOL _canCancel;
	/*^block*/id _completion;
	NSMutableArray* _cameraFiles;
	NSObject*<OS_dispatch_queue> _serializer;

}

@property (nonatomic,retain) NSMutableArray * cameraFiles;                         //@synthesize cameraFiles=_cameraFiles - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                 //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) BOOL canCancel;                                       //@synthesize canCancel=_canCancel - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serializer;              //@synthesize serializer=_serializer - In the implementation block
-(id)completion;
-(NSMutableArray *)cameraFiles;
-(id)initWithCameraFiles:(id)arg1 canCancel:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteNextCameraFile;
-(void)deleteAllCameraFiles;
-(unsigned long long)removeCameraFile:(id)arg1 ;
-(void)setCameraFiles:(NSMutableArray *)arg1 ;
-(BOOL)canCancel;
-(void)setCanCancel:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)serializer;
-(void)setSerializer:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

