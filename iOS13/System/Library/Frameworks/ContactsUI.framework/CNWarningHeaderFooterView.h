/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(NSString *)warningText;
-(id)warningAttributedText;
-(void)setWarningText:(NSString *)arg1 ;
-(BOOL)shouldDisplayWarningIcon;
-(void)setShouldDisplayWarningIcon:(BOOL)arg1 ;
@end

