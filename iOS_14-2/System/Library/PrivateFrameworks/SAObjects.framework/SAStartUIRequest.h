/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class SAStartRequest, SAStartLocalRequest, NSString, NSArray;

@interface SAStartUIRequest : SABaseClientBoundCommand <SAClientBoundCommand>

@property (nonatomic,retain) SAStartRequest * startRequest; 
@property (nonatomic,retain) SAStartLocalRequest * startLocalRequest; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startUIRequest;
+(id)startUIRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAStartRequest *)startRequest;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAStartLocalRequest *)startLocalRequest;
-(void)setStartRequest:(SAStartRequest *)arg1 ;
-(void)setStartLocalRequest:(SAStartLocalRequest *)arg1 ;
@end

