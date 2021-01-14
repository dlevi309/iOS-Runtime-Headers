/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@class NSString;

@interface WPDPersistence : NSObject {

	BOOL _isRangingEnabled;
	BOOL _needsInit;
	BOOL _systemFirstUnlocked;
	NSString* _bootUUID;

}

@property (assign,nonatomic) BOOL needsInit;                        //@synthesize needsInit=_needsInit - In the implementation block
@property (assign,nonatomic) BOOL systemFirstUnlocked;              //@synthesize systemFirstUnlocked=_systemFirstUnlocked - In the implementation block
@property (nonatomic,retain) NSString * bootUUID;                   //@synthesize bootUUID=_bootUUID - In the implementation block
@property (assign,nonatomic) BOOL isRangingEnabled;                 //@synthesize isRangingEnabled=_isRangingEnabled - In the implementation block
-(BOOL)needsInit;
-(void)setBootUUID:(NSString *)arg1 ;
-(id)init;
-(void)setIsRangingEnabled:(BOOL)arg1 ;
-(void)setNeedsInit:(BOOL)arg1 ;
-(id)currentBootSessionUUID;
-(void)firstUnlockedWithEvent:(BOOL)arg1 ;
-(BOOL)readBoolPropertyValue:(id)arg1 ;
-(void)deletePropertyValue:(id)arg1 ;
-(void)setSystemFirstUnlocked:(BOOL)arg1 ;
-(BOOL)systemFirstUnlocked;
-(id)readStringPropertyValue:(id)arg1 ;
-(BOOL)isRangingEnabled;
-(void)writeBoolProperty:(id)arg1 Value:(BOOL)arg2 ;
-(NSString *)bootUUID;
-(void)dealloc;
-(void)writeStringProperty:(id)arg1 Value:(id)arg2 ;
-(void)synchronisePrefs;
@end

