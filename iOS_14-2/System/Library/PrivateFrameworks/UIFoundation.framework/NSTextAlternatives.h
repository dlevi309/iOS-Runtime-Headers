/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isLowConfidence;
-(id)description;
-(id)originalText;
-(NSString *)primaryString;
-(id)alternatives;
-(NSArray *)alternativeStrings;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 isLowConfidence:(BOOL)arg3 ;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)alternativeAtIndex:(unsigned long long)arg1 ;
-(void)noteSelectedAlternativeString:(id)arg1 ;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 ;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3 ;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3 isLowConfidence:(BOOL)arg4 ;
-(id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 ;
-(id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 identifier:(id)arg3 ;
-(unsigned long long)numberOfAlternatives;
-(void)setIsLowConfidence:(BOOL)arg1 ;
-(void)dealloc;
@end

