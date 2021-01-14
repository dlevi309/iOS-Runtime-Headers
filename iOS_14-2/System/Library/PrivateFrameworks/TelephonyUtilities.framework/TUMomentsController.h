/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUMomentsControllerDataSourceDelegate.h>

@protocol OS_dispatch_queue, TUMomentsControllerDataSource, TUMomentsControllerDelegate;
@class NSObject, NSMutableDictionary, NSString;

@interface TUMomentsController : NSObject <TUMomentsControllerDataSourceDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<TUMomentsControllerDataSource> _dataSource;
	id<TUMomentsControllerDelegate> _delegate;
	NSMutableDictionary* _capabilitiesByVideoStreamToken;
	NSMutableDictionary* _providerByVideoStreamToken;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<TUMomentsControllerDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,__weak,readonly) id<TUMomentsControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * capabilitiesByVideoStreamToken;              //@synthesize capabilitiesByVideoStreamToken=_capabilitiesByVideoStreamToken - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * providerByVideoStreamToken;                  //@synthesize providerByVideoStreamToken=_providerByVideoStreamToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isFaceTimePhotosRestricted;
+(void)setFaceTimePhotosEnabled:(BOOL)arg1 ;
+(BOOL)isFaceTimePhotosEnabledByDefault;
+(BOOL)isFaceTimePhotosXPCServiceEnabled;
+(void)setFaceTimePhotosEnabledDeterminer:(/*^block*/id)arg1 ;
+(BOOL)isInternalInstall;
+(BOOL)isFaceTimePhotosEnabled;
+(/*^block*/id)faceTimePhotosEnabledDeterminer;
-(id)init;
-(id<TUMomentsControllerDelegate>)delegate;
-(id<TUMomentsControllerDataSource>)dataSource;
-(id)initWithDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithDelegate:(id)arg1 dataSource:(id)arg2 ;
-(void)endRequestWithTransactionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)capabilitiesByVideoStreamToken;
-(NSMutableDictionary *)providerByVideoStreamToken;
-(void)dataSource:(id)arg1 didUpdateCapabilities:(id)arg2 forVideoStreamToken:(long long)arg3 ;
-(void)dataSource:(id)arg1 willCaptureRemoteRequestFromRequesterID:(id)arg2 ;
-(void)dataSource:(id)arg1 didReceiveLocallyRequestedMomentDescriptor:(id)arg2 ;
-(void)serverDiedForDataSource:(id)arg1 ;
-(void)startRequestWithMediaType:(int)arg1 forProvider:(id)arg2 requesteeID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)registerProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unregisterProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)capabilitiesForProvider:(id)arg1 ;
-(void)dealloc;
@end

