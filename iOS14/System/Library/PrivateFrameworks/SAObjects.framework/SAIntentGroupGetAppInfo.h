/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)appIdentifyingInfo;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setAppIdentifyingInfo:(NSArray *)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)shouldSearchLocallyOnly;
-(void)setShouldSearchLocallyOnly:(BOOL)arg1 ;
@end

