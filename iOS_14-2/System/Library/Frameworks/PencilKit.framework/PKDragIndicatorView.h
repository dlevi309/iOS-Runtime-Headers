/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>

@class NSString;

@interface PKDragIndicatorView : UIView <PKEdgeLocatable> {

	unsigned long long _edgeLocation;

}

@property (assign,nonatomic) unsigned long long edgeLocation;              //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
@end

