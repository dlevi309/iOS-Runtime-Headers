/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPLikesMediaEntity : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * influencedSharedUserId; 
+(id)likesMediaEntity;
+(id)likesMediaEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)influencedSharedUserId;
-(void)setInfluencedSharedUserId:(NSString *)arg1 ;
@end

