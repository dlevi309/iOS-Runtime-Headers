/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <Intents/INObject.h>

@class INPerson, NSArray, NSString, NSDateComponents;

@interface MSIntentMail : INObject

@property (nonatomic,copy) INPerson * sender; 
@property (nonatomic,copy) NSArray * to; 
@property (nonatomic,copy) NSArray * cc; 
@property (nonatomic,copy) NSArray * bcc; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,copy) NSDateComponents * dateSent; 
@end

