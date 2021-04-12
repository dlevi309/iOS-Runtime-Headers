/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFUserActivityData.h>
@class NSString, NSArray, NSDictionary, NSData;


@protocol SFUserActivityData <NSObject>
@property (nonatomic,copy) NSString * activityType; 
@property (nonatomic,copy) NSArray * userInfo; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setUserInfo:(id)arg1;
-(void)setActivityType:(id)arg1;
-(NSArray *)userInfo;
-(NSString *)activityType;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSData;

@interface SFUserActivityData : NSObject <SFUserActivityData, NSSecureCoding, NSCopying> {

	NSString* _activityType;
	NSArray* _userInfo;

}

@property (nonatomic,copy) NSString * activityType;                                  //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSArray * userInfo;                                       //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setUserInfo:(NSArray *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(NSArray *)userInfo;
-(NSString *)activityType;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

