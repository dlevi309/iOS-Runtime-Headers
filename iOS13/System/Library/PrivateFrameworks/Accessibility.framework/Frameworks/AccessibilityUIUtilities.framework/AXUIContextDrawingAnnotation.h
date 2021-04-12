/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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
-(NSString *)label;
-(CGRect)boundingRect;
-(id)initWithLabel:(id)arg1 boundingRect:(CGRect)arg2 ;
@end

