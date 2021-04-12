/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <Intents/INIntent.h>

@class INPerson, NSString;

@interface MSGetMailIntent : INIntent

@property (assign,nonatomic) long long readStatus; 
@property (nonatomic,copy) INPerson * sender; 
@property (nonatomic,copy) INPerson * recipient; 
@property (nonatomic,copy) NSString * subject; 
@end

