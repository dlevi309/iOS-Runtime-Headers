/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInfographicItem.h>

@class NSAttributedString, NSString;

@interface HKInfographicTextItem : NSObject <HKInfographicItem> {

	NSAttributedString* _descriptionString;

}

@property (nonatomic,retain) NSAttributedString * descriptionString;              //@synthesize descriptionString=_descriptionString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)descriptionString;
-(id)initWithDescription:(id)arg1 ;
-(void)setDescriptionString:(NSAttributedString *)arg1 ;
@end

