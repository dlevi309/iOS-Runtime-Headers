/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAConnectionPolicy;

@interface SASetConnectionHeader : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * aceHostHeader; 
@property (nonatomic,retain) SAConnectionPolicy * connectionPolicy; 
@property (assign,nonatomic) BOOL reconnectNow; 
+(id)setConnectionHeader;
+(id)setConnectionHeaderWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setConnectionPolicy:(SAConnectionPolicy *)arg1 ;
-(SAConnectionPolicy *)connectionPolicy;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)aceHostHeader;
-(void)setAceHostHeader:(NSString *)arg1 ;
-(BOOL)reconnectNow;
-(void)setReconnectNow:(BOOL)arg1 ;
@end

