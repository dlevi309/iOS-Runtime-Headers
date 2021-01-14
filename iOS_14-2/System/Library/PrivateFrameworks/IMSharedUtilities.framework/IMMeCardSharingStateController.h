/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMMeCardSharingStateController : NSObject

@property (assign,nonatomic) BOOL sharingEnabled; 
@property (assign,nonatomic) unsigned long long sharingAudience; 
@property (assign,nonatomic) unsigned long long nameFormat; 
@property (assign,nonatomic) BOOL nameForkedFromMeCard; 
@property (assign,nonatomic) BOOL imageForkedFromMeCard; 
+(id)sharedInstance;
-(id)init;
-(void)_migrateMeCardDomains;
-(void)_syncPreferenceDidChange;
-(BOOL)nameForkedFromMeCard;
-(void)_incrementSharingVersion;
-(void)postNameFormatChangedNotification;
-(void)setNameForkedFromMeCard:(BOOL)arg1 ;
-(void)setImageForkedFromMeCard:(BOOL)arg1 ;
-(BOOL)wasSharingEverEnabled;
-(unsigned long long)sharingAudience;
-(void)setSharingAudience:(unsigned long long)arg1 ;
-(unsigned long long)nameFormat;
-(BOOL)imageForkedFromMeCard;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(void)setNameFormat:(unsigned long long)arg1 ;
-(BOOL)sharingEnabled;
@end

