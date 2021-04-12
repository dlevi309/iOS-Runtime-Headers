/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRectangleObservation.h>

@class NSArray, NSString;

@interface VNTextObservation : VNRectangleObservation {

	NSArray* _characterBoxes;
	NSString* _text;

}

@property (nonatomic,copy) NSArray * characterBoxes; 
@property (nonatomic,copy,readonly) NSString * text; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)characterBoxes;
-(void)setCharacterBoxes:(NSArray *)arg1 ;
@end

