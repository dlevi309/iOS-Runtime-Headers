/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSNumber;

@interface AFMetrics : NSObject <NSSecureCoding> {

	NSString* _originalCommandId;
	long long _category;
	NSDictionary* _eventInfo;
	NSNumber* _duration;

}

@property (nonatomic,copy) NSString * originalCommandId;              //@synthesize originalCommandId=_originalCommandId - In the implementation block
@property (assign,nonatomic) long long category;                      //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDictionary * eventInfo;                  //@synthesize eventInfo=_eventInfo - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                     //@synthesize duration=_duration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCategory:(long long)arg1 ;
-(void)setDuration:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)originalCommandId;
-(id)categoryString;
-(long long)category;
-(void)setOriginalCommandId:(NSString *)arg1 ;
-(double)_roundDouble:(double)arg1 toSignificantDigits:(unsigned long long)arg2 ;
-(id)aceMetrics;
-(id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 eventInfo:(id)arg3 duration:(id)arg4 ;
-(id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 duration:(id)arg3 ;
-(void)setEventInfo:(NSDictionary *)arg1 ;
-(id)description;
-(NSDictionary *)eventInfo;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)duration;
@end

