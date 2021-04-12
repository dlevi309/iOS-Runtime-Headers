/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

