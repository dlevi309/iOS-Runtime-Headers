/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)compress;
-(void)setFont:(UIFont *)arg1 ;
-(double)desiredWidth;
-(NSArray *)preferredCompressions;
-(id)_compressPhoneNumberIfFitsInCompressionLevel:(int)arg1 ;
-(void)setDesiredWidth:(double)arg1 ;
-(void)setPreferredCompressions:(NSArray *)arg1 ;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(UIFont *)font;
@end

