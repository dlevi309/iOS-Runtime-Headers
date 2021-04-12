/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAIRequestSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * acousticIdSearchSessionId; 
+(id)requestSearch;
+(id)requestSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)acousticIdSearchSessionId;
-(void)setAcousticIdSearchSessionId:(NSString *)arg1 ;
@end

