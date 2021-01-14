/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class SASyncAnchor, NSString, NSArray;

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand>

@property (nonatomic,retain) SASyncAnchor * current; 
@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)chunkDenied;
+(id)chunkDeniedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)chunkDeniedWithErrorCode:(long long)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)initWithErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(SASyncAnchor *)current;
-(BOOL)mutatingCommand;
-(void)setErrorCode:(long long)arg1 ;
-(void)setCurrent:(SASyncAnchor *)arg1 ;
@end

