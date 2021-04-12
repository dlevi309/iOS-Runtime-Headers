/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class NSDictionary, NSData;

@interface SFCustomFeedback : SFFeedback {

	unsigned long long _feedbackType;
	NSDictionary* _jsonFeedback;
	NSData* _data;

}

@property (assign,nonatomic) unsigned long long feedbackType;              //@synthesize feedbackType=_feedbackType - In the implementation block
@property (nonatomic,copy) NSDictionary * jsonFeedback;                    //@synthesize jsonFeedback=_jsonFeedback - In the implementation block
@property (nonatomic,copy) NSData * data;                                  //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 jsonFeedback:(id)arg2 ;
-(NSData *)data;
-(void)setJsonFeedback:(NSDictionary *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 data:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)feedbackType;
-(NSDictionary *)jsonFeedback;
-(void)setFeedbackType:(unsigned long long)arg1 ;
@end

