/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)bootUUID;
-(id)currentBootSessionUUID;
-(void)synchronisePrefs;
-(void)writeBoolProperty:(id)arg1 Value:(BOOL)arg2 ;
-(void)writeStringProperty:(id)arg1 Value:(id)arg2 ;
-(void)setSystemFirstUnlocked:(BOOL)arg1 ;
-(void)setNeedsInit:(BOOL)arg1 ;
-(BOOL)needsInit;
-(id)readStringPropertyValue:(id)arg1 ;
-(BOOL)readBoolPropertyValue:(id)arg1 ;
-(void)setIsRangingEnabled:(BOOL)arg1 ;
-(BOOL)isRangingEnabled;
-(BOOL)systemFirstUnlocked;
-(void)firstUnlockedWithEvent:(BOOL)arg1 ;
-(void)deletePropertyValue:(id)arg1 ;
-(void)setBootUUID:(NSString *)arg1 ;
@end

