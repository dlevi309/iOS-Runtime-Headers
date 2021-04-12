/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NSString, NSData;

@interface NEDNSQuery : NSObject {

	NSString* _name;
	long long _recordType;
	long long _recordClass;
	NSData* _answerData;

}

@property (readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (readonly) long long recordType;               //@synthesize recordType=_recordType - In the implementation block
@property (readonly) long long recordClass;              //@synthesize recordClass=_recordClass - In the implementation block
@property (copy) NSData * answerData;                    //@synthesize answerData=_answerData - In the implementation block
-(long long)recordType;
-(NSString *)name;
-(NSData *)answerData;
-(long long)recordClass;
-(id)initWithName:(id)arg1 recordType:(long long)arg2 recordClass:(long long)arg3 ;
-(id)createAnswer;
-(void)setAnswerData:(NSData *)arg1 ;
@end

