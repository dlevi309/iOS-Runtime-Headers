/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInfographicItem.h>

@class NSAttributedString, NSString;

@interface HKInfographicContentItem : NSObject <HKInfographicItem> {

	NSAttributedString* _titleString;
	NSAttributedString* _descriptionString;

}

@property (nonatomic,retain) NSAttributedString * titleString;                    //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) NSAttributedString * descriptionString;              //@synthesize descriptionString=_descriptionString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)descriptionString;
-(void)setDescriptionString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)titleString;
-(void)setTitleString:(NSAttributedString *)arg1 ;
-(id)initWithTitle:(id)arg1 description:(id)arg2 ;
@end

