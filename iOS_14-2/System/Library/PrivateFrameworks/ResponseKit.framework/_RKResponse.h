/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(NSString *)text;
-(unsigned long long)type;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)speechAct;
-(id)initWithSpeechAct:(id)arg1 headword:(id)arg2 text:(id)arg3 ;
-(NSString *)headword;
@end

