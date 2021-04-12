/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)requestId;
-(id)encodedClassName;
-(void)setRequestId:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)locallyResolved;
-(void)setLocallyResolved:(BOOL)arg1 ;
@end

