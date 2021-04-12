/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@protocol NSObject;
@class NSNumber;

@interface ADUserDeviceUtilities : NSObject {

	NSNumber* _lastiTunesAccountID;
	id<NSObject> _notifyToken;

}

@property (retain) NSNumber * lastiTunesAccountID;                    //@synthesize lastiTunesAccountID=_lastiTunesAccountID - In the implementation block
@property (nonatomic,retain) id<NSObject> notifyToken;                //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,readonly) BOOL deviceHasHomeButton; 
+(id)sharedInstance;
+(id)iCloudAccount;
+(id)iTunesStoreAccount;
+(BOOL)isiCloudManagedAppleId;
+(BOOL)isiTunesManagedAppleId;
+(id)iTunesAccountIdentifier;
+(BOOL)isiCloudAccountAvailable;
+(BOOL)isiTunesAccountAvailable;
+(BOOL)isManagedAppleId;
+(BOOL)educationModeEnabled;
-(id<NSObject>)notifyToken;
-(void)setNotifyToken:(id<NSObject>)arg1 ;
-(BOOL)deviceHasHomeButton;
-(void)unregisterForiTunesAccountChanges;
-(NSNumber *)lastiTunesAccountID;
-(void)setLastiTunesAccountID:(NSNumber *)arg1 ;
@end

