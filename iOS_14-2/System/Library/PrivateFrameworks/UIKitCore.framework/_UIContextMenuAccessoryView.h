/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UIContextMenuAccessoryView : UIView {

	unsigned long long _location;
	unsigned long long _trackingAxis;
	CGPoint _offset;
	SCD_Struct_UI3 _anchor;

}

@property (assign,nonatomic) unsigned long long location;                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI3 anchor;                        //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) CGPoint offset;                               //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long trackingAxis;              //@synthesize trackingAxis=_trackingAxis - In the implementation block
-(unsigned long long)location;
-(CGPoint)attachmentOffsetWithReferenceFrame:(CGRect)arg1 ;
-(void)setLocation:(unsigned long long)arg1 ;
-(CGPoint)offset;
-(id)initWithFrame:(CGRect)arg1 configuration:(SCD_Struct_UI102)arg2 ;
-(unsigned long long)trackingAxis;
-(void)setOffset:(CGPoint)arg1 ;
-(SCD_Struct_UI3)anchor;
-(void)setAnchor:(SCD_Struct_UI3)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTrackingAxis:(unsigned long long)arg1 ;
@end

