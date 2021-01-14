/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUICachedLayout.h>

@class NSString;

@interface SKUITextLayout : NSObject <SKUICachedLayout> {

	CTFramesetterRef _framesetter;
	double _lineHeight;
	BOOL _requiresTruncation;
	CGSize _size;
	CTFrameRef _textFrame;
	CGSize _truncatedSize;

}

@property (nonatomic,readonly) double lineHeight;                    //@synthesize lineHeight=_lineHeight - In the implementation block
@property (nonatomic,readonly) BOOL requiresTruncation;              //@synthesize requiresTruncation=_requiresTruncation - In the implementation block
@property (nonatomic,readonly) CTFrameRef textFrame;                 //@synthesize textFrame=_textFrame - In the implementation block
@property (nonatomic,readonly) CGSize textSize;                      //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) CGSize truncatedSize;                 //@synthesize truncatedSize=_truncatedSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CFAttributedStringRef)_newAttributedStringWithRequest:(id)arg1 ;
+(CFAttributedStringRef)newAttributedStringWithText:(id)arg1 ;
-(CGSize)textSize;
-(double)lineHeight;
-(void)dealloc;
-(CTFrameRef)textFrame;
-(id)initWithLayoutRequest:(id)arg1 ;
-(BOOL)requiresTruncation;
-(CGSize)truncatedSize;
@end

