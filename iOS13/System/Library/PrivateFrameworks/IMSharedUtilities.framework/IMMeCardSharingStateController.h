/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setSharingAudience:(unsigned long long)arg1 ;
-(void)_incrementSharingVersion;
-(BOOL)sharingEnabled;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(unsigned long long)sharingAudience;
-(unsigned long long)nameFormat;
-(void)setNameFormat:(unsigned long long)arg1 ;
-(void)postNameFormatChangedNotification;
-(BOOL)nameForkedFromMeCard;
-(void)setNameForkedFromMeCard:(BOOL)arg1 ;
-(BOOL)imageForkedFromMeCard;
-(void)setImageForkedFromMeCard:(BOOL)arg1 ;
-(BOOL)wasSharingEverEnabled;
@end

