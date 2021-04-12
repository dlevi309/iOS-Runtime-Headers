/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SAStartStructuredDictationRequest : SAStartRequest

@property (nonatomic,copy) NSString * structuredDictationType; 
+(id)startStructuredDictationRequest;
+(id)startStructuredDictationRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)structuredDictationType;
-(void)setStructuredDictationType:(NSString *)arg1 ;
@end

