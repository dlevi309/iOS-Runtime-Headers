/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SAUIGetResponseAlternatives : SAStartRequest

@property (assign,nonatomic) BOOL locallyResolved; 
@property (nonatomic,copy) NSString * requestId; 
+(id)getResponseAlternatives;
+(id)getResponseAlternativesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setRequestId:(NSString *)arg1 ;
-(BOOL)locallyResolved;
-(void)setLocallyResolved:(BOOL)arg1 ;
-(NSString *)requestId;
@end

