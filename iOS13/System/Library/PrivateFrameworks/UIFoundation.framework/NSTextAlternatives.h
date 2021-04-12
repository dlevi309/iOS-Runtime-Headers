/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NSTextAlternatives : NSObject <NSSecureCoding> {

	NSString* _primaryString;
	NSArray* _alternativeStrings;
	id _internal;
	BOOL _isLowConfidence;

}

@property (assign,nonatomic) BOOL isLowConfidence;              //@synthesize isLowConfidence=_isLowConfidence - In the implementation block
@property (readonly) NSString * primaryString; 
@property (readonly) NSArray * alternativeStrings; 
+(id)attributedText:(id)arg1 withAlternativeTexts:(id)arg2 style:(long long)arg3 ;
+(id)attributedText:(id)arg1 withAlternativeTexts:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(NSArray *)alternativeStrings;
-(NSString *)primaryString;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 ;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3 isLowConfidence:(BOOL)arg4 ;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 isLowConfidence:(BOOL)arg3 ;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3 ;
-(id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 ;
-(id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 identifier:(id)arg3 ;
-(void)noteSelectedAlternativeString:(id)arg1 ;
-(id)originalText;
-(unsigned long long)numberOfAlternatives;
-(id)alternatives;
-(id)alternativeAtIndex:(unsigned long long)arg1 ;
-(BOOL)isLowConfidence;
-(void)setIsLowConfidence:(BOOL)arg1 ;
@end

