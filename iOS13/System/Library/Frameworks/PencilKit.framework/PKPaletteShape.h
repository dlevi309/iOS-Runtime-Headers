/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class UIImage;

@interface PKPaletteShape : NSObject {

	UIImage* _image;
	long long _shapeType;

}

@property (readonly) long long shapeType;                    //@synthesize shapeType=_shapeType - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
+(id)shapeWithType:(long long)arg1 ;
-(UIImage *)image;
-(id)initWithShapeType:(long long)arg1 ;
-(long long)shapeType;
@end

