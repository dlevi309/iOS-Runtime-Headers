/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, NSNumber;

@interface FLHSA2LoginNotification : NSObject <NSSecureCoding> {

	BOOL _userAllowedSignIn;
	NSString* _title;
	NSString* _informativeText;
	NSString* _codePrompt;
	NSString* _approveButtonTitle;
	NSString* _dismissButtonTitle;
	NSSet* _supportedDismissActions;
	NSString* _appleID;
	NSString* _altDSID;
	NSNumber* _longitude;
	NSNumber* _latitude;
	NSString* _deviceType;
	NSString* _deviceModel;
	NSString* _deviceColorString;
	NSString* _pushMessageID;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * informativeText;                   //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,copy) NSString * codePrompt;                        //@synthesize codePrompt=_codePrompt - In the implementation block
@property (nonatomic,copy) NSString * approveButtonTitle;                //@synthesize approveButtonTitle=_approveButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * dismissButtonTitle;                //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
@property (nonatomic,copy) NSSet * supportedDismissActions;              //@synthesize supportedDismissActions=_supportedDismissActions - In the implementation block
@property (nonatomic,copy) NSString * appleID;                           //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                           //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSNumber * longitude;                         //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSNumber * latitude;                          //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy) NSString * deviceType;                        //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy) NSString * deviceModel;                       //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,copy) NSString * deviceColorString;                 //@synthesize deviceColorString=_deviceColorString - In the implementation block
@property (nonatomic,copy) NSString * pushMessageID;                     //@synthesize pushMessageID=_pushMessageID - In the implementation block
@property (assign,nonatomic) BOOL userAllowedSignIn;                     //@synthesize userAllowedSignIn=_userAllowedSignIn - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(NSString *)deviceType;
-(NSString *)appleID;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setInformativeText:(NSString *)arg1 ;
-(NSString *)informativeText;
-(id)initWithFollowUpItemUserInfo:(id)arg1 ;
-(id)followUpItemUserInfo;
-(NSString *)codePrompt;
-(void)setCodePrompt:(NSString *)arg1 ;
-(NSString *)approveButtonTitle;
-(void)setApproveButtonTitle:(NSString *)arg1 ;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
-(NSSet *)supportedDismissActions;
-(void)setSupportedDismissActions:(NSSet *)arg1 ;
-(NSString *)deviceColorString;
-(void)setDeviceColorString:(NSString *)arg1 ;
-(NSString *)pushMessageID;
-(void)setPushMessageID:(NSString *)arg1 ;
-(BOOL)userAllowedSignIn;
-(void)setUserAllowedSignIn:(BOOL)arg1 ;
@end

