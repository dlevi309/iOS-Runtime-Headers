/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <BoardServices/BSServiceInterface.h>

@class NSString, BSObjCProtocol;

@interface BSMutableServiceInterface : BSServiceInterface

@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long clientMessagingExpectation; 
@property (nonatomic,copy) BSObjCProtocol * server; 
@property (nonatomic,copy) BSObjCProtocol * client; 
+(id)interfaceWithIdentifier:(id)arg1 ;
-(void)setClient:(BSObjCProtocol *)arg1 ;
-(void)setServer:(BSObjCProtocol *)arg1 ;
-(void)setClientMessagingExpectation:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

