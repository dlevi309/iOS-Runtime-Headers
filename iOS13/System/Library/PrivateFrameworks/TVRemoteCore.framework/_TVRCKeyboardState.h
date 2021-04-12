/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TVRCKeyboardAttributes *)attributes;
-(void)setAttributes:(TVRCKeyboardAttributes *)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isEditing;
-(void)setIsEditing:(BOOL)arg1 ;
@end

