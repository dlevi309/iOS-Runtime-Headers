/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class UIFont, NSString;

@interface SPFont : NSObject <NSSecureCoding, NSKeyedUnarchiverDelegate> {

	UIFont* _font;

}

@property (nonatomic,retain) UIFont * font;                         //@synthesize font=_font - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setFont:(UIFont *)arg1 ;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIFont *)font;
-(id)initWithFont:(id)arg1 ;
@end

