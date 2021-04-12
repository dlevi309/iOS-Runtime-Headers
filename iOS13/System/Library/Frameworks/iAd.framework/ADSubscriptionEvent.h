/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSDictionary *)info;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(void)setEventTime:(double)arg1 ;
-(double)eventTime;
-(NSString *)qToken;
-(void)setQToken:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 withQToken:(id)arg2 withSourceID:(id)arg3 withEventTime:(double)arg4 withInfo:(id)arg5 ;
@end

