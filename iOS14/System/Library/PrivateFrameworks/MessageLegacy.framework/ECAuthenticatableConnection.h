/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

@class NSArray, NSString;


@protocol ECAuthenticatableConnection <NSObject>
@property (nonatomic,readonly) NSArray * authenticationMechanisms; 
@property (nonatomic,readonly) NSString * securityProtocol; 
@property (nonatomic,readonly) BOOL loginDisabled; 
@required
-(BOOL)loginDisabled;
-(NSString *)securityProtocol;
-(NSArray *)authenticationMechanisms;

@end

