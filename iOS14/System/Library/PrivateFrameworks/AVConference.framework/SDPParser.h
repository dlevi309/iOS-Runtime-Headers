/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSArray, NSEnumerator, NSDictionary, NSString;

@interface SDPParser : NSObject {

	NSArray* _lines;
	NSEnumerator* _lineEnumerator;
	NSDictionary* _fieldNameMap;
	NSString* _fieldName;
	NSString* _fieldValue;
	unsigned char _fieldType;
	BOOL _parsingDone;

}

@property (nonatomic,readonly) NSString * fieldName;                 //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSString * fieldValue;                //@synthesize fieldValue=_fieldValue - In the implementation block
@property (nonatomic,readonly) unsigned char fieldType;              //@synthesize fieldType=_fieldType - In the implementation block
@property (nonatomic,readonly) BOOL parsingDone;                     //@synthesize parsingDone=_parsingDone - In the implementation block
-(id)initWithString:(id)arg1 ;
-(NSString *)fieldName;
-(unsigned char)fieldType;
-(NSString *)fieldValue;
-(BOOL)nextLine;
-(void)dealloc;
-(BOOL)parseMediaLineHeader:(id)arg1 mediaType:(int*)arg2 supportedPayloads:(id)arg3 rtpPort:(int*)arg4 ;
-(BOOL)parsingDone;
-(int)stringToMediaType:(id)arg1 ;
@end

