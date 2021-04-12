/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class MPUTextDrawingContext, NSString;

@interface MPUTextDrawingView : UIView {

	double _cachedDisplayScale;
	MPUTextDrawingContext* _textDrawingContext;

}

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,retain) MPUTextDrawingContext * textDrawingContext;              //@synthesize textDrawingContext=_textDrawingContext - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSString *)text;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)_cachedDisplayScale;
-(void)setTextDrawingContext:(MPUTextDrawingContext *)arg1 ;
-(MPUTextDrawingContext *)textDrawingContext;
@end

