/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol CPLEngineSyncTaskDelegate, NSCoding;
@class CPLEngineLibrary, CPLSyncSession, NSString;

@interface CPLEngineSyncTask : NSObject {

	BOOL _foreground;
	BOOL _forceSync;
	BOOL _cancelled;
	id<CPLEngineSyncTaskDelegate> _delegate;
	CPLEngineLibrary* _engineLibrary;
	CPLSyncSession* _session;
	id<NSCoding> _transportUserIdentifier;
	NSString* _phaseDescription;

}

@property (setter=_setCancelled:,getter=isCancelled) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (retain) id<CPLEngineSyncTaskDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CPLEngineLibrary * engineLibrary;                  //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,readonly) CPLSyncSession * session;                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<NSCoding> transportUserIdentifier;                //@synthesize transportUserIdentifier=_transportUserIdentifier - In the implementation block
@property (assign,nonatomic) BOOL foreground;                                     //@synthesize foreground=_foreground - In the implementation block
@property (assign,nonatomic) BOOL forceSync;                                      //@synthesize forceSync=_forceSync - In the implementation block
@property (nonatomic,readonly) NSString * taskIdentifier; 
@property (readonly) NSString * phaseDescription;                                 //@synthesize phaseDescription=_phaseDescription - In the implementation block
+(id)taskWithEngineLibrary:(id)arg1 session:(id)arg2 ;
-(id)description;
-(id<CPLEngineSyncTaskDelegate>)delegate;
-(void)setDelegate:(id<CPLEngineSyncTaskDelegate>)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
-(void)launch;
-(CPLSyncSession *)session;
-(BOOL)forceSync;
-(void)setForceSync:(BOOL)arg1 ;
-(NSString *)taskIdentifier;
-(void)setForeground:(BOOL)arg1 ;
-(BOOL)foreground;
-(NSString *)phaseDescription;
-(void)_setCancelled:(BOOL)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(unsigned long long)diskPressureState;
-(void)taskDidProgress:(float)arg1 userInfo:(id)arg2 ;
-(id<NSCoding>)transportUserIdentifier;
-(void)setTransportUserIdentifier:(id<NSCoding>)arg1 ;
@end

