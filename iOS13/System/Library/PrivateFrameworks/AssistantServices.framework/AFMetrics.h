/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(NSNumber *)duration;
-(void)setDuration:(NSNumber *)arg1 ;
-(id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 eventInfo:(id)arg3 duration:(id)arg4 ;
-(NSString *)originalCommandId;
-(void)setOriginalCommandId:(NSString *)arg1 ;
-(id)categoryString;
-(NSDictionary *)eventInfo;
-(double)_roundDouble:(double)arg1 toSignificantDigits:(unsigned long long)arg2 ;
-(id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 duration:(id)arg3 ;
-(id)aceMetrics;
-(void)setEventInfo:(NSDictionary *)arg1 ;
@end

