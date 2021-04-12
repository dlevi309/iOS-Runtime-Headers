/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface QLToolbarButtonOption : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	long long _style;

}

@property (readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (assign) long long style;                      //@synthesize style=_style - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cancelOption;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isCancel;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(long long)style;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

