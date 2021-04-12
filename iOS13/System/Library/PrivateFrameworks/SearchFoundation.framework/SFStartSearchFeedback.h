/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFStartSearchFeedback : SFFeedback {

	NSString* _input;
	NSString* _uuid;
	unsigned long long _triggerEvent;

}

@property (nonatomic,retain) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * input;                               //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;              //@synthesize triggerEvent=_triggerEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(NSString *)input;
-(void)setUuid:(NSString *)arg1 ;
-(void)setInput:(NSString *)arg1 ;
-(unsigned long long)triggerEvent;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3 ;
@end

