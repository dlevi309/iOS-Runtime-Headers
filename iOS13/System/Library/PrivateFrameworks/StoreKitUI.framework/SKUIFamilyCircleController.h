/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSCache, SSFamilyCircle, SKUIClientContext, FAFamilyCircle, NSNumber;

@interface SKUIFamilyCircleController : NSObject {

	NSCache* _imageCache;
	BOOL _hasLoaded;
	SSFamilyCircle* _iTunesFamily;
	SKUIClientContext* _clientContext;
	FAFamilyCircle* _iCloudFamily;
	NSNumber* _lastAccountID;
	long long _reloadPromptStyle;

}

@property (retain) NSNumber * lastAccountID;                                 //@synthesize lastAccountID=_lastAccountID - In the implementation block
@property (assign) long long reloadPromptStyle;                              //@synthesize reloadPromptStyle=_reloadPromptStyle - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) BOOL hasLoaded;                               //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (nonatomic,readonly) SSFamilyCircle * familyCircle;                //@synthesize iTunesFamily=_iTunesFamily - In the implementation block
@property (nonatomic,readonly) FAFamilyCircle * iCloudFamily;                //@synthesize iCloudFamily=_iCloudFamily - In the implementation block
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)reloadData;
-(SSFamilyCircle *)familyCircle;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)profilePictureForFamilyMember:(id)arg1 ;
-(long long)reloadPromptStyle;
-(void)_reloadDataWithPromptStyle:(long long)arg1 ;
-(NSNumber *)lastAccountID;
-(void)setLastAccountID:(NSNumber *)arg1 ;
-(void)setReloadPromptStyle:(long long)arg1 ;
-(void)_setITunesFamily:(id)arg1 error:(id)arg2 iCloudFamily:(id)arg3 error:(id)arg4 ;
-(void)_setProfilePicture:(id)arg1 forMember:(id)arg2 ;
-(BOOL)hasLoaded;
-(FAFamilyCircle *)iCloudFamily;
@end

