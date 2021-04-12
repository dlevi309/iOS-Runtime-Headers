/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
@end

