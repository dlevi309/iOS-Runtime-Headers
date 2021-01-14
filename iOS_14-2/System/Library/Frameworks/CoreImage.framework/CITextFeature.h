/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFeature.h>

@class NSArray, NSString;

@interface CITextFeature : CIFeature {

	NSArray* subFeatures;
	NSString* messageString;
	CGPoint topLeft;
	CGPoint topRight;
	CGPoint bottomLeft;
	CGPoint bottomRight;
	CGRect bounds;

}

@property (readonly) NSString * messageString; 
@property (readonly) CGRect bounds; 
@property (readonly) CGPoint topLeft; 
@property (readonly) CGPoint topRight; 
@property (readonly) CGPoint bottomLeft; 
@property (readonly) CGPoint bottomRight; 
@property (readonly) NSArray * subFeatures; 
-(CGRect)bounds;
-(CGPoint)bottomLeft;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(id)type;
-(CGPoint)bottomRight;
-(NSArray *)subFeatures;
-(id)initWithBounds:(CGRect)arg1 topLeft:(CGPoint)arg2 topRight:(CGPoint)arg3 bottomLeft:(CGPoint)arg4 bottomRight:(CGPoint)arg5 subFeatures:(id)arg6 messageString:(id)arg7 ;
-(NSString *)messageString;
-(void)dealloc;
@end

