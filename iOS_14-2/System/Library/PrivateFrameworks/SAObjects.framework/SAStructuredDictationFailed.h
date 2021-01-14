/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAStructuredDictationFailed : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * recognition; 
@property (nonatomic,copy) NSString * userFacingReasonDescription; 
@property (nonatomic,copy) NSString * userFacingReasonTitle; 
+(id)structuredDictationFailed;
+(id)structuredDictationFailedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_dialogIdentifier;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setRecognition:(NSString *)arg1 ;
-(NSString *)userFacingReasonDescription;
-(NSString *)userFacingReasonTitle;
-(long long)errorCode;
-(void)setUserFacingReasonDescription:(NSString *)arg1 ;
-(void)setUserFacingReasonTitle:(NSString *)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(NSString *)recognition;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogIdentifier;
@end

