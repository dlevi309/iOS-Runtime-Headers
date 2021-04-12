/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSMedia : RWIProtocolJSONObject {

	int _sourceLine;
	NSString* _text;
	long long _source;
	NSString* _sourceURL;

}

@property (nonatomic,copy) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long source;                //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * sourceURL;              //@synthesize sourceURL=_sourceURL - In the implementation block
@property (assign,nonatomic) int sourceLine;                  //@synthesize sourceLine=_sourceLine - In the implementation block
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(id)initWithText:(id)arg1 source:(long long)arg2 ;
-(int)sourceLine;
-(void)setSourceLine:(int)arg1 ;
@end

