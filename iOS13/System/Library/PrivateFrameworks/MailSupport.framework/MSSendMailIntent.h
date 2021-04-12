/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSString, NSArray, NSNumber;

@interface MSSendMailIntent : INIntent <EFPubliclyDescribable>

@property (nonatomic,copy) NSString * sender; 
@property (nonatomic,copy) NSArray * to; 
@property (nonatomic,copy) NSArray * cc; 
@property (nonatomic,copy) NSArray * bcc; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,copy) NSArray * attachments; 
@property (nonatomic,copy) NSNumber * isDraft; 
@property (nonatomic,copy) NSString * userTypedContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
-(NSString *)description;
-(id)_privacySafeDescription;
-(NSString *)ef_publicDescription;
@end

