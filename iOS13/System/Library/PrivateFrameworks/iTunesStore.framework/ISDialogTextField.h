/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)keyboardType;
-(BOOL)isSecure;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
@end

