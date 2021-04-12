/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SANoteCreate : SADomainCommand

@property (nonatomic,copy) NSString * contents; 
+(id)create;
+(id)createWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)contents;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setContents:(NSString *)arg1 ;
@end

