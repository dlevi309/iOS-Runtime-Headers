/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)left;
-(LPCaptionButtonPresentationProperties *)button;
-(LPCaptionPresentationProperties *)leading;
-(id)init;
-(id)right;
-(BOOL)hasAnyContent;
-(void)applyToAllCaptions:(/*^block*/id)arg1 ;
-(void)setButton:(LPCaptionButtonPresentationProperties *)arg1 ;
-(LPCaptionPresentationProperties *)trailing;
@end

