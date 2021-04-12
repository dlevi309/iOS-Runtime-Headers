/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setContents:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

