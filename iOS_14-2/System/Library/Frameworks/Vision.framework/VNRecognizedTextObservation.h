/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRectangleObservation.h>

@class NSArray, NSString;

@interface VNRecognizedTextObservation : VNRectangleObservation {

	BOOL _isTitle;
	NSArray* _textObjects;
	NSString* _text;

}

@property (nonatomic,copy) NSArray * textObjects;                 //@synthesize textObjects=_textObjects - In the implementation block
@property (assign,nonatomic) BOOL isTitle;                        //@synthesize isTitle=_isTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)topCandidates:(unsigned long long)arg1 ;
-(BOOL)isTitle;
-(NSString *)text;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)textObjects;
-(void)setTextObjects:(NSArray *)arg1 ;
-(void)setIsTitle:(BOOL)arg1 ;
@end

