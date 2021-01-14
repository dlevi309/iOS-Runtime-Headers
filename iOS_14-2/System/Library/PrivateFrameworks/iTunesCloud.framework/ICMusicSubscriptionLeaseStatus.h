/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICStoreDialogResponse, NSDictionary;

@interface ICMusicSubscriptionLeaseStatus : NSObject <NSCopying> {

	BOOL _shouldPlaybackRequireOnlineKeys;
	BOOL _hasOnlinePlaybackKeys;
	BOOL _hasOfflinePlaybackKeys;
	BOOL _hasPendingLeaseAcquisition;
	long long _leaseState;
	ICStoreDialogResponse* _stateReasonDialog;
	NSDictionary* _stateReasonDialogMetricsDictionary;

}

@property (assign,nonatomic) BOOL hasOnlinePlaybackKeys;                                   //@synthesize hasOnlinePlaybackKeys=_hasOnlinePlaybackKeys - In the implementation block
@property (assign,nonatomic) BOOL hasOfflinePlaybackKeys;                                  //@synthesize hasOfflinePlaybackKeys=_hasOfflinePlaybackKeys - In the implementation block
@property (assign,nonatomic) BOOL hasPendingLeaseAcquisition;                              //@synthesize hasPendingLeaseAcquisition=_hasPendingLeaseAcquisition - In the implementation block
@property (assign,nonatomic) BOOL shouldPlaybackRequireOnlineKeys;                         //@synthesize shouldPlaybackRequireOnlineKeys=_shouldPlaybackRequireOnlineKeys - In the implementation block
@property (assign,nonatomic) long long leaseState;                                         //@synthesize leaseState=_leaseState - In the implementation block
@property (nonatomic,copy) ICStoreDialogResponse * stateReasonDialog;                      //@synthesize stateReasonDialog=_stateReasonDialog - In the implementation block
@property (nonatomic,copy) NSDictionary * stateReasonDialogMetricsDictionary;              //@synthesize stateReasonDialogMetricsDictionary=_stateReasonDialogMetricsDictionary - In the implementation block
-(BOOL)shouldPlaybackRequireOnlineKeys;
-(BOOL)hasOnlinePlaybackKeys;
-(BOOL)hasOfflinePlaybackKeys;
-(BOOL)hasPendingLeaseAcquisition;
-(long long)leaseState;
-(ICStoreDialogResponse *)stateReasonDialog;
-(NSDictionary *)stateReasonDialogMetricsDictionary;
-(void)setShouldPlaybackRequireOnlineKeys:(BOOL)arg1 ;
-(void)setHasOnlinePlaybackKeys:(BOOL)arg1 ;
-(void)setLeaseState:(long long)arg1 ;
-(void)setHasOfflinePlaybackKeys:(BOOL)arg1 ;
-(void)setHasPendingLeaseAcquisition:(BOOL)arg1 ;
-(void)setStateReasonDialog:(ICStoreDialogResponse *)arg1 ;
-(void)setStateReasonDialogMetricsDictionary:(NSDictionary *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

