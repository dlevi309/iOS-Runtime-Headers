/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface ISDialogTextField : NSObject <SSXPCCoding> {

	long long _keyboardType;
	BOOL _secure;
	NSString* _title;
	NSString* _value;

}

@property (assign) long long keyboardType;                          //@synthesize keyboardType=_keyboardType - In the implementation block
@property (getter=isSecure) BOOL secure;                            //@synthesize secure=_secure - In the implementation block
@property (retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (retain) NSString * value;                                //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textFieldWithTitle:(id)arg1 ;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(NSString *)title;
-(void)dealloc;
@end

