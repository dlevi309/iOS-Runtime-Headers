/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBUserActivityData.h>
@class NSString, NSArray, NSData;


@protocol _SFPBUserActivityData <NSObject>
@property (nonatomic,copy) NSString * activityType; 
@property (nonatomic,copy) NSArray * userInfos; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setActivityType:(id)arg1;
-(NSString *)activityType;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(void)addUserInfo:(id)arg1;
-(NSArray *)userInfos;
-(void)clearUserInfo;
-(unsigned long long)userInfoCount;
-(id)userInfoAtIndex:(unsigned long long)arg1;
-(void)setUserInfos:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBUserActivityData : PBCodable <_SFPBUserActivityData, NSSecureCoding> {

	NSString* _activityType;
	NSArray* _userInfos;

}

@property (nonatomic,copy) NSString * activityType;                 //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSArray * userInfos;                     //@synthesize userInfos=_userInfos - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setUserInfo:(id)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)activityType;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(void)addUserInfo:(id)arg1 ;
-(NSArray *)userInfos;
-(void)clearUserInfo;
-(unsigned long long)userInfoCount;
-(id)userInfoAtIndex:(unsigned long long)arg1 ;
-(void)setUserInfos:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

