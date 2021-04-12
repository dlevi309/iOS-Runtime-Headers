/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/

#import <AirPlayRoutePrediction/AirPlayRoutePrediction-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ARPHomeControlSuggestion : NSObject <NSSecureCoding, NSCopying> {

	long long _type;
	double _score;
	NSString* _homeUUID;
	NSString* _targetUUID;
	NSString* _accessoryServiceUUID;
	NSString* _suggestionReason;
	double _computedScore;

}

@property (assign,nonatomic) double computedScore;                       //@synthesize computedScore=_computedScore - In the implementation block
@property (assign,nonatomic) long long type;                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double score;                               //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSString * homeUUID;                          //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,copy) NSString * targetUUID;                        //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,copy) NSString * accessoryServiceUUID;              //@synthesize accessoryServiceUUID=_accessoryServiceUUID - In the implementation block
@property (nonatomic,copy) NSString * suggestionReason;                  //@synthesize suggestionReason=_suggestionReason - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)homeUUID;
-(double)score;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(void)setTargetUUID:(NSString *)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setHomeUUID:(NSString *)arg1 ;
-(NSString *)targetUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)accessoryServiceUUID;
-(void)setSuggestionReason:(NSString *)arg1 ;
-(void)setComputedScore:(double)arg1 ;
-(void)setAccessoryServiceUUID:(NSString *)arg1 ;
-(id)initWithHomeUUID:(id)arg1 targetUUID:(id)arg2 accessoryServiceUUID:(id)arg3 type:(long long)arg4 score:(double)arg5 computedScore:(double)arg6 suggestionReason:(id)arg7 ;
-(NSString *)suggestionReason;
-(id)initWithHomeUUID:(id)arg1 targetUUID:(id)arg2 accessoryServiceUUID:(id)arg3 type:(long long)arg4 score:(double)arg5 suggestionReason:(id)arg6 ;
-(double)computedScore;
@end

