/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSString;

@interface MSVSystemDialogTextField : NSObject {

	BOOL _secure;
	NSString* _title;
	long long _keyboardType;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;              //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) long long keyboardType;                   //@synthesize keyboardType=_keyboardType - In the implementation block
+(id)textFieldWithTitle:(id)arg1 secure:(BOOL)arg2 ;
+(id)textFieldWithTitle:(id)arg1 ;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

