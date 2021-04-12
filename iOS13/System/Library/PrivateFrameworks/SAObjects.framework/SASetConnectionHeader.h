/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)encodedClassName;
-(void)setConnectionPolicy:(SAConnectionPolicy *)arg1 ;
-(SAConnectionPolicy *)connectionPolicy;
-(BOOL)requiresResponse;
-(NSString *)aceHostHeader;
-(void)setAceHostHeader:(NSString *)arg1 ;
-(BOOL)reconnectNow;
-(void)setReconnectNow:(BOOL)arg1 ;
@end

