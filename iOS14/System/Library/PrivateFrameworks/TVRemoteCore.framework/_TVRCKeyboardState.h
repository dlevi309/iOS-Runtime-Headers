/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TVRCKeyboardAttributes, NSString;

@interface _TVRCKeyboardState : NSObject <NSSecureCoding> {

	BOOL _isEditing;
	TVRCKeyboardAttributes* _attributes;
	NSString* _text;

}

@property (assign,nonatomic) BOOL isEditing;                                 //@synthesize isEditing=_isEditing - In the implementation block
@property (nonatomic,copy) TVRCKeyboardAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyboardStateFromDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setAttributes:(TVRCKeyboardAttributes *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isEditing;
-(TVRCKeyboardAttributes *)attributes;
-(id)description;
-(void)setIsEditing:(BOOL)arg1 ;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
@end

