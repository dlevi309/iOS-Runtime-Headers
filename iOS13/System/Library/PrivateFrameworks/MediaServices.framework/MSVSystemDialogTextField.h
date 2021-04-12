/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)textFieldWithTitle:(id)arg1 ;
+(id)textFieldWithTitle:(id)arg1 secure:(BOOL)arg2 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)keyboardType;
-(BOOL)isSecure;
-(id)initWithTitle:(id)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
@end

