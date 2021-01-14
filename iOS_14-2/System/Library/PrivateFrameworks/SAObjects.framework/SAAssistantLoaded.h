/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, NSArray;

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * appleConnectSessionExpirationTimestamp; 
@property (nonatomic,copy) NSString * appleConnectSessionToken; 
@property (nonatomic,copy) NSString * dataAnchor; 
@property (nonatomic,copy) NSNumber * requestSync; 
@property (nonatomic,copy) NSArray * syncAnchors; 
@property (nonatomic,copy) NSString * version; 
+(id)assistantLoaded;
+(id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)appleConnectSessionToken;
-(NSNumber *)appleConnectSessionExpirationTimestamp;
-(void)setAppleConnectSessionExpirationTimestamp:(NSNumber *)arg1 ;
-(void)setAppleConnectSessionToken:(NSString *)arg1 ;
-(NSString *)dataAnchor;
-(void)setDataAnchor:(NSString *)arg1 ;
-(void)setRequestSync:(NSNumber *)arg1 ;
-(NSArray *)syncAnchors;
-(void)setSyncAnchors:(NSArray *)arg1 ;
-(NSNumber *)requestSync;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
@end

