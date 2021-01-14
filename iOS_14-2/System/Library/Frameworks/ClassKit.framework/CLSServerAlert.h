/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>

@class NSString, NSDictionary, NSArray;

@interface CLSServerAlert : CLSObject {

	long long _alertType;
	long long _displayRoles;
	long long _displayedCount;
	NSString* _title;
	NSString* _message;
	NSDictionary* _defaultButtonInfo;
	NSArray* _otherButtonInfos;

}

@property (assign,nonatomic) long long alertType;                         //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) long long displayRoles;                      //@synthesize displayRoles=_displayRoles - In the implementation block
@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultButtonInfo;              //@synthesize defaultButtonInfo=_defaultButtonInfo - In the implementation block
@property (nonatomic,copy) NSArray * otherButtonInfos;                    //@synthesize otherButtonInfos=_otherButtonInfos - In the implementation block
@property (assign,nonatomic) long long displayedCount; 
+(BOOL)supportsSecureCoding;
-(void)setMessage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(long long)alertType;
-(NSString *)message;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAlertType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)title;
-(void)setDisplayedCount:(long long)arg1 ;
-(long long)displayedCount;
-(long long)displayRoles;
-(void)setDisplayRoles:(long long)arg1 ;
-(NSDictionary *)defaultButtonInfo;
-(void)setDefaultButtonInfo:(NSDictionary *)arg1 ;
-(NSArray *)otherButtonInfos;
-(void)setOtherButtonInfos:(NSArray *)arg1 ;
@end

