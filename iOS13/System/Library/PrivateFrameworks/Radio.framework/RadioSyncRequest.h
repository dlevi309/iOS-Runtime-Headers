/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/RadioRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLConnectionRequest, NSDictionary, NSString;

@interface RadioSyncRequest : RadioRequest {

	NSObject*<OS_dispatch_queue> _artworkQueue;
	unsigned long long _globalVersion;
	SSURLConnectionRequest* _request;
	NSDictionary* _responseDictionary;
	BOOL _disableArtworkLoading;
	BOOL _includeCleanTracksOnly;
	BOOL _isAutomaticUpdate;
	NSString* _referer;
	NSDictionary* _resultingOverrideBagDictionary;

}

@property (assign,nonatomic) BOOL disableArtworkLoading;                                        //@synthesize disableArtworkLoading=_disableArtworkLoading - In the implementation block
@property (assign,nonatomic) BOOL includeCleanTracksOnly;                                       //@synthesize includeCleanTracksOnly=_includeCleanTracksOnly - In the implementation block
@property (assign,nonatomic) BOOL isAutomaticUpdate;                                            //@synthesize isAutomaticUpdate=_isAutomaticUpdate - In the implementation block
@property (nonatomic,copy) NSString * referer;                                                  //@synthesize referer=_referer - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * resultingOverrideBagDictionary;              //@synthesize resultingOverrideBagDictionary=_resultingOverrideBagDictionary - In the implementation block
-(id)init;
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)responseDictionary;
-(void)setIncludeCleanTracksOnly:(BOOL)arg1 ;
-(id)matchDictionary;
-(id)changeList;
-(id)initWithGlobalVersion:(unsigned long long)arg1 ;
-(id)_sortedChangesByType:(id)arg1 ;
-(id)_stationSortOrderForChanges:(id)arg1 ;
-(id)_updateModel:(id)arg1 withChangeDictionary:(id)arg2 changeType:(long long*)arg3 loadArtworkSynchronously:(BOOL)arg4 ;
-(void)setDisableArtworkLoading:(BOOL)arg1 ;
-(BOOL)disableArtworkLoading;
-(BOOL)includeCleanTracksOnly;
-(BOOL)isAutomaticUpdate;
-(void)setIsAutomaticUpdate:(BOOL)arg1 ;
-(NSString *)referer;
-(void)setReferer:(NSString *)arg1 ;
-(NSDictionary *)resultingOverrideBagDictionary;
@end

