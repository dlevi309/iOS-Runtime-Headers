/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(id)initWithFont:(id)arg1 ;
@end

