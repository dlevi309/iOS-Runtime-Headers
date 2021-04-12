/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)index;
-(_DUIPreview *)preview;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPreview:(_DUIPreview *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setImageComponent:(_DUIImageComponent *)arg1 ;
-(_DUIImageComponent *)imageComponent;
@end

