/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UIDictationToken : NSObject <NSSecureCoding> {

	BOOL _removeSpaceBefore;
	BOOL _removeSpaceAfter;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL removeSpaceBefore;               //@synthesize removeSpaceBefore=_removeSpaceBefore - In the implementation block
@property (nonatomic,readonly) BOOL removeSpaceAfter;              //@synthesize removeSpaceAfter=_removeSpaceAfter - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setRemoveSpaceBefore:(BOOL)arg1 ;
-(BOOL)removeSpaceBefore;
-(BOOL)removeSpaceAfter;
-(id)_descriptionExtra;
-(id)initWithText:(id)arg1 removeSpaceBefore:(BOOL)arg2 removeSpaceAfter:(BOOL)arg3 ;
@end

