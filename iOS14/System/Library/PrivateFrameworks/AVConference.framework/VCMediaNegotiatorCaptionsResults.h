/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSSet;

@interface VCMediaNegotiatorCaptionsResults : NSObject {

	BOOL _remoteCanDisplayCaptions;
	NSSet* _localLanguages;
	NSSet* _remoteLanguages;

}

@property (assign,nonatomic) BOOL remoteCanDisplayCaptions;              //@synthesize remoteCanDisplayCaptions=_remoteCanDisplayCaptions - In the implementation block
@property (nonatomic,retain) NSSet * localLanguages;                     //@synthesize localLanguages=_localLanguages - In the implementation block
@property (nonatomic,retain) NSSet * remoteLanguages;                    //@synthesize remoteLanguages=_remoteLanguages - In the implementation block
-(void)dealloc;
-(NSSet *)localLanguages;
-(void)setLocalLanguages:(NSSet *)arg1 ;
-(NSSet *)remoteLanguages;
-(void)setRemoteLanguages:(NSSet *)arg1 ;
-(BOOL)remoteCanDisplayCaptions;
-(void)setRemoteCanDisplayCaptions:(BOOL)arg1 ;
@end

