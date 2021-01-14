/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSAttributedString;

@interface HKAxisAnnotation : NSObject {

	NSAttributedString* _annotationText;
	id _position;

}

@property (nonatomic,readonly) NSAttributedString * annotationText;              //@synthesize annotationText=_annotationText - In the implementation block
@property (nonatomic,readonly) id position;                                      //@synthesize position=_position - In the implementation block
-(id)position;
-(NSAttributedString *)annotationText;
-(id)initWithAnnotation:(id)arg1 position:(id)arg2 ;
@end

