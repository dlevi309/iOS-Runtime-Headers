/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface ADSubscriptionEvent : NSObject <NSCopying> {

	long long _type;
	NSString* _qToken;
	NSString* _sourceID;
	double _eventTime;
	NSDictionary* _info;

}

@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * qToken;                //@synthesize qToken=_qToken - In the implementation block
@property (nonatomic,retain) NSString * sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
@property (assign,nonatomic) double eventTime;                 //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,retain) NSDictionary * info;              //@synthesize info=_info - In the implementation block
-(void)setSourceID:(NSString *)arg1 ;
-(NSDictionary *)info;
-(NSString *)qToken;
-(void)setType:(long long)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(long long)type;
-(NSString *)sourceID;
-(double)eventTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEventTime:(double)arg1 ;
-(void)setQToken:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 withQToken:(id)arg2 withSourceID:(id)arg3 withEventTime:(double)arg4 withInfo:(id)arg5 ;
@end

