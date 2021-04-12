/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <UIFoundation/NSTextAttachment.h>

@class IKBadgeElement, IKColor;

@interface IKTextBadgeAttachment : NSTextAttachment {

	IKBadgeElement* _badge;
	IKColor* _tintColor;

}

@property (nonatomic,__weak,readonly) IKBadgeElement * badge;              //@synthesize badge=_badge - In the implementation block
@property (nonatomic,retain) IKColor * tintColor;                          //@synthesize tintColor=_tintColor - In the implementation block
-(IKColor *)tintColor;
-(void)setTintColor:(IKColor *)arg1 ;
-(IKBadgeElement *)badge;
-(id)initWithBadgeElement:(id)arg1 ;
@end

