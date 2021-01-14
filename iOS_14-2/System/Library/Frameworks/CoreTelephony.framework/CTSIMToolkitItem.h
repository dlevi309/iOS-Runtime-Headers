/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTSIMToolkitItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _selected;
	NSString* _text;

}

@property (nonatomic,retain) NSString * text;              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL selected;                //@synthesize selected=_selected - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithText:(id)arg1 selected:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id)description;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

