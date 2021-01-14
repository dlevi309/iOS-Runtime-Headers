/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


@protocol MPUTextContainer;
@class NSString;

@interface MPUTextContainerContentSizeUpdater : NSObject {

	id<MPUTextContainer> _textContainer;
	NSString* _lastSeenPreferredContentSizeCategory;

}

@property (nonatomic,retain) NSString * lastSeenPreferredContentSizeCategory;              //@synthesize lastSeenPreferredContentSizeCategory=_lastSeenPreferredContentSizeCategory - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTextContainer> textContainer;                    //@synthesize textContainer=_textContainer - In the implementation block
-(id)init;
-(id<MPUTextContainer>)textContainer;
-(void)setTextContainer:(id<MPUTextContainer>)arg1 ;
-(void)dealloc;
-(void)setLastSeenPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)_preferredContentSizeCategoryDidChange:(id)arg1 ;
-(NSString *)lastSeenPreferredContentSizeCategory;
-(void)_updateTextStyleFonts;
-(void)ensureTextStyleFontsMatchPreferredTextStyleFonts;
@end

