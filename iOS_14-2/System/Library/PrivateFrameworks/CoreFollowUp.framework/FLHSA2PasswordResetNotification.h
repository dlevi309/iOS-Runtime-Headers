/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FLHSA2PasswordResetNotification : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _informativeText;
	NSString* _approveButtonTitle;
	NSString* _dismissButtonTitle;
	NSString* _appleID;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * informativeText;                 //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,copy) NSString * approveButtonTitle;              //@synthesize approveButtonTitle=_approveButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * dismissButtonTitle;              //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * appleID;                         //@synthesize appleID=_appleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
-(NSString *)informativeText;
-(void)setInformativeText:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFollowUpItemUserInfo:(id)arg1 ;
-(id)followUpItemUserInfo;
-(NSString *)approveButtonTitle;
-(void)setApproveButtonTitle:(NSString *)arg1 ;
@end

