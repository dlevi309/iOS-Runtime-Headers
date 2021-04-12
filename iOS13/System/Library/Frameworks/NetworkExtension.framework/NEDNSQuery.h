/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(long long)recordType;
-(long long)recordClass;
-(id)initWithName:(id)arg1 recordType:(long long)arg2 recordClass:(long long)arg3 ;
-(id)createAnswer;
-(NSData *)answerData;
-(void)setAnswerData:(NSData *)arg1 ;
@end

