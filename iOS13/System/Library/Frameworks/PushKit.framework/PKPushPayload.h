/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
*/


@class NSString, NSDictionary;

@interface PKPushPayload : NSObject {

	NSString* _type;
	NSDictionary* _dictionaryPayload;

}

@property (copy) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (copy) NSDictionary * dictionaryPayload;              //@synthesize dictionaryPayload=_dictionaryPayload - In the implementation block
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSDictionary *)dictionaryPayload;
-(void)setDictionaryPayload:(NSDictionary *)arg1 ;
@end

