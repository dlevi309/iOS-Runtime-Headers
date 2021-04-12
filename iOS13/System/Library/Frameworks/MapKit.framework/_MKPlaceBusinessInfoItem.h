/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSString, NSAttributedString, UIFont, UIColor;

@interface _MKPlaceBusinessInfoItem : NSObject {

	NSString* _displayString;
	BOOL _isAvailable;
	NSAttributedString* _formattedDisplayString;
	UIFont* _font;
	UIColor* _textColor;

}

@property (nonatomic,readonly) NSAttributedString * displayString; 
+(id)itemWithDescription:(id)arg1 availability:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSAttributedString *)displayString;
-(void)setFont:(id)arg1 textColor:(id)arg2 ;
@end

