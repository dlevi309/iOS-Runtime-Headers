/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactTableViewHeaderFooterView.h>

@class NSString;

@interface CNWarningHeaderFooterView : CNContactTableViewHeaderFooterView {

	BOOL _shouldDisplayWarningIcon;
	NSString* _warningText;

}

@property (assign,nonatomic) BOOL shouldDisplayWarningIcon;              //@synthesize shouldDisplayWarningIcon=_shouldDisplayWarningIcon - In the implementation block
@property (nonatomic,retain) NSString * warningText;                     //@synthesize warningText=_warningText - In the implementation block
+(id)exclamationMark;
-(NSString *)warningText;
-(id)warningAttributedText;
-(void)setWarningText:(NSString *)arg1 ;
-(BOOL)shouldDisplayWarningIcon;
-(void)setShouldDisplayWarningIcon:(BOOL)arg1 ;
@end

