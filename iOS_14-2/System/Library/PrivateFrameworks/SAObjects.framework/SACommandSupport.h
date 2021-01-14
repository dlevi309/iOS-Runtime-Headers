/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAObjectSupport, NSURL, NSArray;

@interface SACommandSupport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * aceVersion; 
@property (nonatomic,copy) NSString * commandId; 
@property (nonatomic,retain) SAObjectSupport * resultSupport; 
@property (nonatomic,copy) NSURL * serverEndpoint; 
@property (nonatomic,copy) NSArray * supportedConstraints; 
@property (assign,nonatomic) long long weight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandSupport;
+(id)commandSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setWeight:(long long)arg1 ;
-(NSURL *)serverEndpoint;
-(long long)weight;
-(NSString *)commandId;
-(void)setCommandId:(NSString *)arg1 ;
-(SAObjectSupport *)resultSupport;
-(void)setResultSupport:(SAObjectSupport *)arg1 ;
-(void)setServerEndpoint:(NSURL *)arg1 ;
-(NSArray *)supportedConstraints;
-(void)setSupportedConstraints:(NSArray *)arg1 ;
-(NSString *)aceVersion;
-(void)setAceVersion:(NSString *)arg1 ;
@end

