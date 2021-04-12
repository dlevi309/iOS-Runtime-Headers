/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class SAStartRequest, SAStartLocalRequest, NSString, NSArray;

@interface SAStartUIRequest : SABaseClientBoundCommand <SAClientBoundCommand>

@property (nonatomic,retain) SAStartRequest * startRequest; 
@property (nonatomic,retain) SAStartLocalRequest * startLocalRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)startUIRequest;
+(id)startUIRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAStartRequest *)startRequest;
-(id)encodedClassName;
-(void)setStartLocalRequest:(SAStartLocalRequest *)arg1 ;
-(void)setStartRequest:(SAStartRequest *)arg1 ;
-(SAStartLocalRequest *)startLocalRequest;
-(BOOL)requiresResponse;
@end

