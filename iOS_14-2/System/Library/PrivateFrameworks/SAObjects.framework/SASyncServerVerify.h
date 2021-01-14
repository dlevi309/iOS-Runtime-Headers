/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SASyncServerVerify : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) BOOL fetchSyncDebugInfo; 
@property (assign,nonatomic) BOOL performInternalVerification; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverVerify;
+(id)serverVerifyWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)fetchSyncDebugInfo;
-(void)setFetchSyncDebugInfo:(BOOL)arg1 ;
-(BOOL)performInternalVerification;
-(void)setPerformInternalVerification:(BOOL)arg1 ;
@end

