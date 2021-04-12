/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)feedbackType;
-(void)setFeedbackType:(unsigned long long)arg1 ;
-(void)setJsonFeedback:(NSDictionary *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 jsonFeedback:(id)arg2 ;
-(id)initWithType:(unsigned long long)arg1 data:(id)arg2 ;
-(NSDictionary *)jsonFeedback;
@end

