/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UIContextMenuAccessoryView : UIView {

	unsigned long long _location;
	unsigned long long _trackingAxis;
	NSRange _anchor;
	CGPoint _offset;

}

@property (assign,nonatomic) unsigned long long location;                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) NSRange anchor;                               //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) CGPoint offset;                               //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long trackingAxis;              //@synthesize trackingAxis=_trackingAxis - In the implementation block
-(unsigned long long)location;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setLocation:(unsigned long long)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)trackingAxis;
-(NSRange)anchor;
-(id)initWithFrame:(CGRect)arg1 configuration:(SCD_Struct_UI91)arg2 ;
-(void)setAnchor:(NSRange)arg1 ;
-(CGPoint)attachmentOffsetWithReferenceFrame:(CGRect)arg1 ;
-(void)setTrackingAxis:(unsigned long long)arg1 ;
@end

