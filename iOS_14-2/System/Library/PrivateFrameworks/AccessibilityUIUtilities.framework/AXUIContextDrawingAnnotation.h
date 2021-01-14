/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/


#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
@class NSString;

@interface AXUIContextDrawingAnnotation : NSObject {

	NSString* _label;
	CGRect _boundingRect;

}

@property (nonatomic,readonly) NSString * label;                 //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) CGRect boundingRect;              //@synthesize boundingRect=_boundingRect - In the implementation block
+(id)contextAnnotationMap;
+(void)addLabel:(id)arg1 boundingRect:(CGRect)arg2 withContext:(CGContextRef)arg3 ;
+(id)annotationsForContext:(CGContextRef)arg1 ;
-(id)description;
-(CGRect)boundingRect;
-(id)initWithLabel:(id)arg1 boundingRect:(CGRect)arg2 ;
-(NSString *)label;
@end

