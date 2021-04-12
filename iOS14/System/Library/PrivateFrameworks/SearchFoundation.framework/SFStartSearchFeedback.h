/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)uuid;
-(NSString *)input;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInput:(NSString *)arg1 ;
-(unsigned long long)triggerEvent;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 queryId:(unsigned long long)arg3 ;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
@end

