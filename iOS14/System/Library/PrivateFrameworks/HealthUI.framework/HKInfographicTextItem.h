/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDescriptionString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)descriptionString;
-(id)initWithDescription:(id)arg1 ;
@end

