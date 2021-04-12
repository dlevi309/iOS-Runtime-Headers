/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/_TVRCMediaRemoteDeviceQueryDelegate.h>
#import <TVRemoteCore/_TVRCRapportDeviceQueryDelegate.h>
#import <TVRemoteCore/_TVRCMatchPointDeviceQueryDelegate.h>
#import <TVRemoteCore/_TVRCRMSDeviceQueryDelegate.h>

@protocol _TVRXDeviceQueryDelegate;
@class NSMutableDictionary, _TVRCMediaRemoteDeviceQuery, _TVRCRapportDeviceQuery, _TVRCRMSDeviceQuery, _TVRCMatchPointDeviceQuery, NSSet, NSString;

@interface _TVRXDeviceQuery : NSObject <_TVRCMediaRemoteDeviceQueryDelegate, _TVRCRapportDeviceQueryDelegate, _TVRCMatchPointDeviceQueryDelegate, _TVRCRMSDeviceQueryDelegate> {

	BOOL _isRunning;
	id<_TVRXDeviceQueryDelegate> _delegate;
	NSMutableDictionary* _aggregateDevices;
	_TVRCMediaRemoteDeviceQuery* _mediaRemoteQuery;
	_TVRCRapportDeviceQuery* _rapportDeviceQuery;
	_TVRCRMSDeviceQuery* _rmsDeviceQuery;
	_TVRCMatchPointDeviceQuery* _matchPointQuery;

}

@property (assign,nonatomic) BOOL isRunning;                                              //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * aggregateDevices;                      //@synthesize aggregateDevices=_aggregateDevices - In the implementation block
@property (nonatomic,retain) _TVRCMediaRemoteDeviceQuery * mediaRemoteQuery;              //@synthesize mediaRemoteQuery=_mediaRemoteQuery - In the implementation block
@property (nonatomic,retain) _TVRCRapportDeviceQuery * rapportDeviceQuery;                //@synthesize rapportDeviceQuery=_rapportDeviceQuery - In the implementation block
@property (nonatomic,retain) _TVRCRMSDeviceQuery * rmsDeviceQuery;                        //@synthesize rmsDeviceQuery=_rmsDeviceQuery - In the implementation block
@property (nonatomic,retain) _TVRCMatchPointDeviceQuery * matchPointQuery;                //@synthesize matchPointQuery=_matchPointQuery - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRXDeviceQueryDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * devices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<_TVRXDeviceQueryDelegate>)delegate;
-(void)setDelegate:(id<_TVRXDeviceQueryDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(BOOL)isRunning;
-(NSSet *)devices;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)_startSearch;
-(void)_notifyDelegateDidUpdateDevices;
-(void)_stopSearch;
-(id)_findAggregateForIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_reevaluateAggregates;
-(void)mediaRemoteDeviceQuery:(id)arg1 addedTelevision:(id)arg2 ;
-(void)mediaRemoteDeviceQuery:(id)arg1 removedTelevision:(id)arg2 ;
-(void)rapportDeviceQuery:(id)arg1 addedDevice:(id)arg2 ;
-(void)rapportDeviceQuery:(id)arg1 removedDevice:(id)arg2 ;
-(void)matchpointDeviceQuery:(id)arg1 addedService:(id)arg2 ;
-(void)matchpointDeviceQuery:(id)arg1 removedService:(id)arg2 ;
-(void)rmsDeviceQuery:(id)arg1 addedDevice:(id)arg2 ;
-(void)rmsDeviceQuery:(id)arg1 removedDevice:(id)arg2 ;
-(NSMutableDictionary *)aggregateDevices;
-(void)setAggregateDevices:(NSMutableDictionary *)arg1 ;
-(_TVRCMediaRemoteDeviceQuery *)mediaRemoteQuery;
-(void)setMediaRemoteQuery:(_TVRCMediaRemoteDeviceQuery *)arg1 ;
-(_TVRCRapportDeviceQuery *)rapportDeviceQuery;
-(void)setRapportDeviceQuery:(_TVRCRapportDeviceQuery *)arg1 ;
-(_TVRCRMSDeviceQuery *)rmsDeviceQuery;
-(void)setRmsDeviceQuery:(_TVRCRMSDeviceQuery *)arg1 ;
-(_TVRCMatchPointDeviceQuery *)matchPointQuery;
-(void)setMatchPointQuery:(_TVRCMatchPointDeviceQuery *)arg1 ;
@end

