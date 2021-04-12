/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASyncSetDeepSyncVerificationNeeded : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * keys; 
+(id)setDeepSyncVerificationNeeded;
+(id)setDeepSyncVerificationNeededWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)keys;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setKeys:(NSArray *)arg1 ;
@end

