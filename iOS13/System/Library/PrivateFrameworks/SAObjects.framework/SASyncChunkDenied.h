/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class SASyncAnchor, NSString, NSArray;

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand>

@property (nonatomic,retain) SASyncAnchor * current; 
@property (assign,nonatomic) long long errorCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)chunkDenied;
+(id)chunkDeniedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)chunkDeniedWithErrorCode:(long long)arg1 ;
-(id)groupIdentifier;
-(SASyncAnchor *)current;
-(void)setCurrent:(SASyncAnchor *)arg1 ;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)encodedClassName;
-(id)initWithErrorCode:(long long)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

