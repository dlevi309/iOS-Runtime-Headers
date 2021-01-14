/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSString, NSDictionary;

@interface HKStringDrawing : NSObject {

	NSString* _text;
	NSDictionary* _attributes;
	CGRect _rect;

}

@property (nonatomic,copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGRect rect;                            //@synthesize rect=_rect - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)stringDrawingWithText:(id)arg1 inRect:(CGRect)arg2 withAttributes:(id)arg3 ;
+(void)drawStrings:(id)arg1 outlineWidth:(double)arg2 outlineColor:(id)arg3 context:(CGContextRef)arg4 ;
-(CGRect)rect;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setRect:(CGRect)arg1 ;
-(void)draw;
-(NSDictionary *)attributes;
-(NSString *)text;
-(id)initWithText:(id)arg1 inRect:(CGRect)arg2 withAttributes:(id)arg3 ;
@end

