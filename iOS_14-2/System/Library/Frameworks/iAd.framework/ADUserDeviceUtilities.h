/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)isiTunesManagedAppleId;
+(id)iTunesStoreAccount;
+(id)sharedInstance;
+(BOOL)isiCloudAccountAvailable;
+(BOOL)educationModeEnabled;
+(id)iCloudAccount;
+(BOOL)isiTunesAccountAvailable;
+(BOOL)isManagedAppleId;
+(BOOL)isiCloudManagedAppleId;
+(id)iTunesAccountIdentifier;
-(void)setNotifyToken:(id<NSObject>)arg1 ;
-(id<NSObject>)notifyToken;
-(BOOL)deviceHasHomeButton;
-(void)unregisterForiTunesAccountChanges;
-(NSNumber *)lastiTunesAccountID;
-(void)setLastiTunesAccountID:(NSNumber *)arg1 ;
@end

