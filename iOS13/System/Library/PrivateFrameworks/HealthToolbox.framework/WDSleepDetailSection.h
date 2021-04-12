/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class NSString, NSAttributedString;

@interface WDSleepDetailSection : NSObject {

	NSString* _headerText;
	NSAttributedString* _attributedDetailText;

}

@property (nonatomic,copy,readonly) NSString * headerText;                                  //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedDetailText;              //@synthesize attributedDetailText=_attributedDetailText - In the implementation block
+(id)sectionWithHeaderText:(id)arg1 attributedDetailText:(id)arg2 ;
+(id)sectionWithHeaderText:(id)arg1 detailText:(id)arg2 ;
-(id)init;
-(NSString *)headerText;
-(NSAttributedString *)attributedDetailText;
-(id)initWithHeaderText:(id)arg1 attributedDetailText:(id)arg2 ;
@end

