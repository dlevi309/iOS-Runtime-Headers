/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)geniusSummonFailed;
+(id)geniusSummonFailedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)geniusSummonFailedWithErrorCode:(long long)arg1 ;
+(id)geniusSummonFailedWithReason:(id)arg1 ;
-(NSString *)reason;
-(id)groupIdentifier;
-(id)initWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)encodedClassName;
-(id)initWithErrorCode:(long long)arg1 ;
-(BOOL)requiresResponse;
@end

