/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASyncSetDeepSyncVerificationNeeded : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * keys; 
+(id)setDeepSyncVerificationNeeded;
+(id)setDeepSyncVerificationNeededWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)keys;
-(void)setKeys:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

