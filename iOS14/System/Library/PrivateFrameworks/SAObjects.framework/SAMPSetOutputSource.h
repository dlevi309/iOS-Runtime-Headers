/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SAMPSetOutputSource : SADomainCommand

@property (nonatomic,copy) NSURL * outputSourceId; 
+(id)setOutputSource;
+(id)setOutputSourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSURL *)outputSourceId;
-(void)setOutputSourceId:(NSURL *)arg1 ;
@end

