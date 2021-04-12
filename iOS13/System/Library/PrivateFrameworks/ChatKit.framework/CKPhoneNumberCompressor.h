/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSString, UIFont, NSArray;

@interface CKPhoneNumberCompressor : NSObject {

	NSString* _phoneNumber;
	UIFont* _font;
	double _desiredWidth;
	NSArray* _preferredCompressions;

}

@property (nonatomic,copy) NSString * phoneNumber;                       //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) UIFont * font;                              //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double desiredWidth;                        //@synthesize desiredWidth=_desiredWidth - In the implementation block
@property (nonatomic,copy) NSArray * preferredCompressions;              //@synthesize preferredCompressions=_preferredCompressions - In the implementation block
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(id)_compressPhoneNumberIfFitsInCompressionLevel:(int)arg1 ;
-(NSArray *)preferredCompressions;
-(id)compress;
-(double)desiredWidth;
-(void)setDesiredWidth:(double)arg1 ;
-(void)setPreferredCompressions:(NSArray *)arg1 ;
@end

