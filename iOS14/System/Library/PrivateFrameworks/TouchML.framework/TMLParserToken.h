/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSString;

@interface TMLParserToken : NSObject {

	unsigned long long _token;
	NSString* _text;

}

@property (nonatomic,readonly) unsigned long long token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSString * text;                       //@synthesize text=_text - In the implementation block
-(id)description;
-(NSString *)text;
-(unsigned long long)token;
-(id)initWithToken:(unsigned long long)arg1 text:(id)arg2 ;
@end

