/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAStartRequest.h>

@class NSData;

@interface SAStartHandoffRequest : SAStartRequest

@property (nonatomic,copy) NSData * handoffData; 
+(id)startHandoffRequest;
+(id)startHandoffRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)handoffData;
-(void)setHandoffData:(NSData *)arg1 ;
@end

