/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)recognition;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)encodedClassName;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogIdentifier;
-(BOOL)requiresResponse;
-(void)setRecognition:(NSString *)arg1 ;
-(NSString *)userFacingReasonDescription;
-(void)setUserFacingReasonDescription:(NSString *)arg1 ;
-(NSString *)userFacingReasonTitle;
-(void)setUserFacingReasonTitle:(NSString *)arg1 ;
@end

