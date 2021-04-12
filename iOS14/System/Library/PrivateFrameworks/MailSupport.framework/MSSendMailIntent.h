/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)ef_publicDescription;
-(NSString *)description;
-(id)_privacySafeDescription;
@end

