/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/


@class NSDictionary, NSString, NSMutableDictionary;

@interface _ICQAlertSpecification : NSObject {

	NSDictionary* _serverDict;
	BOOL _disableLockScreenAlert;
	NSString* _title;
	NSString* _message;
	NSString* _altMessage;
	NSString* _lockScreenTitle;
	NSString* _lockScreenMessage;
	NSString* _altLockScreenMessage;
	long long _defaultButtonIndex;
	NSMutableDictionary* _linkForButtonIndex;

}

@property (retain) NSMutableDictionary * linkForButtonIndex;               //@synthesize linkForButtonIndex=_linkForButtonIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * serverDict; 
@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * altMessage;                        //@synthesize altMessage=_altMessage - In the implementation block
@property (nonatomic,retain) NSString * lockScreenTitle;                   //@synthesize lockScreenTitle=_lockScreenTitle - In the implementation block
@property (nonatomic,retain) NSString * lockScreenMessage;                 //@synthesize lockScreenMessage=_lockScreenMessage - In the implementation block
@property (nonatomic,retain) NSString * altLockScreenMessage;              //@synthesize altLockScreenMessage=_altLockScreenMessage - In the implementation block
@property (assign,nonatomic) BOOL disableLockScreenAlert;                  //@synthesize disableLockScreenAlert=_disableLockScreenAlert - In the implementation block
@property (assign,nonatomic) long long defaultButtonIndex;                 //@synthesize defaultButtonIndex=_defaultButtonIndex - In the implementation block
+(id)alertSpecificationDictionarySampleForLevel:(long long)arg1 ;
+(id)alertSpecificationSampleForLevel:(long long)arg1 ;
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setDefaultButtonIndex:(long long)arg1 ;
-(long long)defaultButtonIndex;
-(void)setServerDict:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)linkForButtonIndex;
-(void)setLink:(id)arg1 forButtonIndex:(long long)arg2 ;
-(void)setLink:(id)arg1 forButtonIndex:(long long)arg2 defaultButton:(BOOL)arg3 ;
-(void)setAltMessage:(NSString *)arg1 ;
-(void)setDisableLockScreenAlert:(BOOL)arg1 ;
-(void)_setLinks:(id)arg1 defaultIndex:(unsigned long long)arg2 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(id)linkForButtonIndex:(long long)arg1 ;
-(NSDictionary *)serverDict;
-(NSString *)altMessage;
-(NSString *)lockScreenTitle;
-(void)setLockScreenTitle:(NSString *)arg1 ;
-(NSString *)lockScreenMessage;
-(void)setLockScreenMessage:(NSString *)arg1 ;
-(NSString *)altLockScreenMessage;
-(void)setAltLockScreenMessage:(NSString *)arg1 ;
-(BOOL)disableLockScreenAlert;
-(void)setLinkForButtonIndex:(NSMutableDictionary *)arg1 ;
@end

