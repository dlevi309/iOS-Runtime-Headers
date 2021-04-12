/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)geniusSummonFailed;
+(id)geniusSummonFailedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)geniusSummonFailedWithErrorCode:(long long)arg1 ;
+(id)geniusSummonFailedWithReason:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)initWithReason:(id)arg1 ;
-(id)initWithErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(NSString *)reason;
-(void)setErrorCode:(long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

