/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OADOrientedBounds, NSDictionary;

@interface CMShapeBuilder : NSObject {

	int _type;
	OADOrientedBounds* _orientedBounds;
	unsigned long long _format;
	NSDictionary* _adjustValues;

}
+(CGRect)canonicalBounds;
-(void)setFileFormat:(unsigned long long)arg1 ;
-(CGAffineTransform)affineTransform;
-(void)setShapeType:(int)arg1 ;
-(BOOL)isOffice12;
-(void)setOrientedBounds:(id)arg1 ;
-(CGPathRef)copyShapeWithTransform:(CGAffineTransform)arg1 ;
-(void)setAdjustValues:(id)arg1 ;
-(float)maxAdjustedValue;
@end

