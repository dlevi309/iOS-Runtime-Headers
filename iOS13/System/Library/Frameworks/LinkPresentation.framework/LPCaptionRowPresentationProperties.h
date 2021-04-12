/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPCaptionPresentationProperties, LPCaptionButtonPresentationProperties;

@interface LPCaptionRowPresentationProperties : NSObject {

	LPCaptionPresentationProperties* _leading;
	LPCaptionPresentationProperties* _trailing;
	LPCaptionButtonPresentationProperties* _button;

}

@property (nonatomic,readonly) BOOL hasAnyContent; 
@property (nonatomic,retain,readonly) LPCaptionPresentationProperties * leading; 
@property (nonatomic,retain,readonly) LPCaptionPresentationProperties * trailing; 
@property (nonatomic,retain) LPCaptionButtonPresentationProperties * button;                   //@synthesize button=_button - In the implementation block
-(id)init;
-(id)left;
-(LPCaptionPresentationProperties *)leading;
-(LPCaptionButtonPresentationProperties *)button;
-(LPCaptionPresentationProperties *)trailing;
-(void)setButton:(LPCaptionButtonPresentationProperties *)arg1 ;
-(id)right;
-(BOOL)hasAnyContent;
-(void)applyToAllCaptions:(/*^block*/id)arg1 ;
@end

