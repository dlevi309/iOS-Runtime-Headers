/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCWRMHandler : NSObject {

	int _localWRMLinkTypeSuggestion;
	int _remoteWRMLinkTypeSuggestion;
	BOOL _isRemoteDuplicating;
	double _localLinkTypeSuggestionChangeTime;
	double _lastConnectionUnstableTime;
	double _WRMNotificationRequestTime;

}

@property (readonly) int localWRMLinkTypeSuggestion;                      //@synthesize localWRMLinkTypeSuggestion=_localWRMLinkTypeSuggestion - In the implementation block
@property (readonly) int remoteWRMLinkTypeSuggestion;                     //@synthesize remoteWRMLinkTypeSuggestion=_remoteWRMLinkTypeSuggestion - In the implementation block
@property (readonly) BOOL isRemoteDuplicating;                            //@synthesize isRemoteDuplicating=_isRemoteDuplicating - In the implementation block
@property (assign) double localLinkTypeSuggestionChangeTime;              //@synthesize localLinkTypeSuggestionChangeTime=_localLinkTypeSuggestionChangeTime - In the implementation block
-(id)init;
-(BOOL)shouldForceWRMRecommendationUsingUserDefaults;
-(BOOL)shouldRequestWRMNotificationWithDuplicationReason:(unsigned char)arg1 isDuplicationEnabled:(BOOL)arg2 isLocalUsingCellular:(BOOL)arg3 atTime:(double)arg4 ;
-(void)updateWRMNotificationRequestTime:(double)arg1 ;
-(unsigned char)processLocalWRMNotification:(SCD_Struct_VC99*)arg1 isAudioOnly:(BOOL)arg2 ;
-(unsigned char)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(BOOL)arg2 ;
-(int)localWRMLinkTypeSuggestion;
-(int)remoteWRMLinkTypeSuggestion;
-(BOOL)isRemoteDuplicating;
-(double)localLinkTypeSuggestionChangeTime;
-(void)setLocalLinkTypeSuggestionChangeTime:(double)arg1 ;
@end

