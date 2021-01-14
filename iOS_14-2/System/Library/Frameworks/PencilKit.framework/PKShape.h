/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSArray, PKStroke;

@interface PKShape : NSObject {

	long long _type;
	NSArray* _strokes;
	PKStroke* _originalStroke;

}

@property (nonatomic,readonly) long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * strokes;                      //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) PKStroke * originalStroke;              //@synthesize originalStroke=_originalStroke - In the implementation block
@property (nonatomic,readonly) BOOL fillable; 
-(NSArray *)strokes;
-(long long)type;
-(BOOL)fillable;
-(id)initWithShapeType:(long long)arg1 strokes:(id)arg2 originalStroke:(id)arg3 ;
-(PKStroke *)originalStroke;
@end

