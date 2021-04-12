/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFEnableLostModeRequest : DMFTaskRequest {

	NSString* _message;
	NSString* _phoneNumber;
	NSString* _footnote;

}

@property (nonatomic,copy) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * footnote;                 //@synthesize footnote=_footnote - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFootnote:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)footnote;
@end

