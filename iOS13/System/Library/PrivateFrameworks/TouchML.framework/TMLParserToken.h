/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)token;
-(NSString *)text;
-(id)initWithToken:(unsigned long long)arg1 text:(id)arg2 ;
@end

