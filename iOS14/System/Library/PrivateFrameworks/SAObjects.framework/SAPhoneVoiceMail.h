/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAPhoneCallSearchResult.h>

@class NSString, NSNumber;

@interface SAPhoneVoiceMail : SAPhoneCallSearchResult

@property (nonatomic,copy) NSString * filePath; 
@property (nonatomic,copy) NSNumber * length; 
+(id)voiceMailWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)voiceMail;
-(void)setLength:(NSNumber *)arg1 ;
-(NSString *)filePath;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)length;
-(void)setFilePath:(NSString *)arg1 ;
@end

