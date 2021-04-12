/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol CPLEngineSyncTaskDelegate, NSCoding;
#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
@class NSDate, NSString, CPLEngineLibrary, CPLSyncSession;

@interface CPLEngineSyncTask : NSObject {

	os_unfair_lock_s _phaseDescriptionLock;
	NSDate* _lastChangeDateForPhaseDescription;
	BOOL _foreground;
	BOOL _forceSync;
	BOOL _cancelled;
	NSString* _phaseDescription;
	id<CPLEngineSyncTaskDelegate> _delegate;
	CPLEngineLibrary* _engineLibrary;
	CPLSyncSession* _session;
	id<NSCoding> _transportUserIdentifier;

}

@property (setter=_setCancelled:,getter=isCancelled) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (retain) id<CPLEngineSyncTaskDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CPLEngineLibrary * engineLibrary;                  //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,readonly) CPLSyncSession * session;                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<NSCoding> transportUserIdentifier;                //@synthesize transportUserIdentifier=_transportUserIdentifier - In the implementation block
@property (assign,nonatomic) BOOL foreground;                                     //@synthesize foreground=_foreground - In the implementation block
@property (assign,nonatomic) BOOL forceSync;                                      //@synthesize forceSync=_forceSync - In the implementation block
@property (nonatomic,readonly) NSString * taskIdentifier; 
@property (copy) NSString * phaseDescription;                                     //@synthesize phaseDescription=_phaseDescription - In the implementation block
+(id)taskWithEngineLibrary:(id)arg1 session:(id)arg2 ;
-(void)launch;
-(void)setForeground:(BOOL)arg1 ;
-(void)_setCancelled:(BOOL)arg1 ;
-(void)setPhaseDescription:(NSString *)arg1 ;
-(NSString *)phaseDescription;
-(id<CPLEngineSyncTaskDelegate>)delegate;
-(BOOL)forceSync;
-(CPLSyncSession *)session;
-(void)setDelegate:(id<CPLEngineSyncTaskDelegate>)arg1 ;
-(id)description;
-(NSString *)taskIdentifier;
-(BOOL)foreground;
-(void)cancel;
-(BOOL)isCancelled;
-(CPLEngineLibrary *)engineLibrary;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(void)launchTransportTask:(id)arg1 withTransportGroup:(id)arg2 ;
-(unsigned long long)diskPressureState;
-(void)taskDidProgress:(float)arg1 userInfo:(id)arg2 ;
-(id)phaseDescriptionLastChangeDate:(id*)arg1 ;
-(id<NSCoding>)transportUserIdentifier;
-(void)setTransportUserIdentifier:(id<NSCoding>)arg1 ;
-(void)setForceSync:(BOOL)arg1 ;
@end

