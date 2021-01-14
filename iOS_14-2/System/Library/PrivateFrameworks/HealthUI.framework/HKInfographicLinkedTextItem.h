/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInfographicItem.h>

@class NSAttributedString, NSString;

@interface HKInfographicLinkedTextItem : NSObject <HKInfographicItem> {

	NSAttributedString* _descriptionString;
	/*^block*/id _didTapLinkedText;

}

@property (nonatomic,retain) NSAttributedString * descriptionString;              //@synthesize descriptionString=_descriptionString - In the implementation block
@property (nonatomic,copy) id didTapLinkedText;                                   //@synthesize didTapLinkedText=_didTapLinkedText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDescriptionString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)descriptionString;
-(id)didTapLinkedText;
-(void)setDidTapLinkedText:(id)arg1 ;
-(id)initWithDescription:(id)arg1 didTapLinkedText:(/*^block*/id)arg2 ;
@end

