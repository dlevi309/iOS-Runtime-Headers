/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UIDebugLogStatement : NSObject {

	long long _type;
	unsigned long long _indentLevel;
	NSString* _prefix;
	NSString* _text;

}

@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long indentLevel;              //@synthesize indentLevel=_indentLevel - In the implementation block
@property (nonatomic,copy) NSString * prefix;                             //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
-(NSString *)prefix;
-(id)init;
-(void)setText:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(unsigned long long)indentLevel;
-(NSString *)text;
-(long long)type;
-(void)setPrefix:(NSString *)arg1 ;
-(void)setIndentLevel:(unsigned long long)arg1 ;
@end

