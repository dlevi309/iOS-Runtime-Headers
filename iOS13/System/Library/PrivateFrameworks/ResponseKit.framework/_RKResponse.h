/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@class NSString;

@interface _RKResponse : NSObject {

	NSString* _speechAct;
	NSString* _headword;
	NSString* _text;

}

@property (readonly) NSString * speechAct;                 //@synthesize speechAct=_speechAct - In the implementation block
@property (readonly) NSString * headword;                  //@synthesize headword=_headword - In the implementation block
@property (readonly) NSString * text;                      //@synthesize text=_text - In the implementation block
@property (readonly) unsigned long long type; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(NSString *)text;
-(NSString *)speechAct;
-(id)initWithSpeechAct:(id)arg1 headword:(id)arg2 text:(id)arg3 ;
-(NSString *)headword;
@end

