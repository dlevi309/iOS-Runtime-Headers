/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _DUIPreview, _DUIImageComponent;

@interface _DUIPreviewAndImageComponent : NSObject <NSSecureCoding> {

	_DUIPreview* _preview;
	_DUIImageComponent* _imageComponent;
	unsigned long long _index;

}

@property (nonatomic,retain) _DUIPreview * preview;                            //@synthesize preview=_preview - In the implementation block
@property (nonatomic,retain) _DUIImageComponent * imageComponent;              //@synthesize imageComponent=_imageComponent - In the implementation block
@property (assign,nonatomic) unsigned long long index;                         //@synthesize index=_index - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(_DUIPreview *)preview;
-(void)setPreview:(_DUIPreview *)arg1 ;
-(_DUIImageComponent *)imageComponent;
-(void)setImageComponent:(_DUIImageComponent *)arg1 ;
@end

