/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSAccount, NSString, SSDialog, NSURL;

@interface SSResponseAction : NSObject <NSCopying> {

	SSAccount* _account;
	NSString* _actionType;
	NSString* _clientIdentifier;
	NSString* _creditsString;
	SSDialog* _dialog;
	NSString* _footerSection;
	NSURL* _url;
	long long _urlBagType;

}

@property (nonatomic,readonly) NSString * actionType;                    //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) SSAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * creditsString;                 //@synthesize creditsString=_creditsString - In the implementation block
@property (nonatomic,readonly) SSDialog * dialog;                        //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,readonly) NSString * footerSection;                 //@synthesize footerSection=_footerSection - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long URLBagType;                     //@synthesize urlBagType=_urlBagType - In the implementation block
+(id)_dialogActionWithDialog:(id)arg1 ;
+(id)_dialogActionWithTouchIDDialog:(id)arg1 ;
+(id)_invalidateURLBagsAction;
+(id)_setActiveAccountActionWithAccount:(id)arg1 ;
+(id)_setCreditsActionWithCredits:(id)arg1 account:(id)arg2 ;
+(id)_actionWithActionType:(id)arg1 ;
+(id)_urlActionWithType:(id)arg1 URL:(id)arg2 ;
+(id)_selectFooterActionWithSection:(id)arg1 ;
+(id)_checkInAppQueueActionWithClientID:(id)arg1 environment:(id)arg2 ;
-(SSAccount *)account;
-(NSString *)actionType;
-(SSDialog *)dialog;
-(long long)URLBagType;
-(NSString *)footerSection;
-(id)description;
-(NSURL *)URL;
-(NSString *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)creditsString;
@end

