/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSURL;

@interface SANoteUpdate : SADomainCommand

@property (nonatomic,copy) NSString * contentsToAppend; 
@property (nonatomic,copy) NSURL * identifier; 
+(id)update;
+(id)updateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)contentsToAppend;
-(void)setContentsToAppend:(NSString *)arg1 ;
-(void)setIdentifier:(NSURL *)arg1 ;
-(NSURL *)identifier;
@end

