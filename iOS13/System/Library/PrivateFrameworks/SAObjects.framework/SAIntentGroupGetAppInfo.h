/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAIntentGroupGetAppInfo : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appIdentifyingInfo; 
@property (assign,nonatomic) BOOL shouldSearchLocallyOnly; 
+(id)getAppInfo;
+(id)getAppInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)appIdentifyingInfo;
-(void)setAppIdentifyingInfo:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(BOOL)shouldSearchLocallyOnly;
-(void)setShouldSearchLocallyOnly:(BOOL)arg1 ;
@end

