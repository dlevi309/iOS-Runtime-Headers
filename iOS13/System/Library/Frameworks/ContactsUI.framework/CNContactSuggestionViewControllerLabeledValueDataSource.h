/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactSuggestionViewControllerDataSource.h>

@class CNLabeledValue, NSString, NSAttributedString, NSURL;

@interface CNContactSuggestionViewControllerLabeledValueDataSource : NSObject <CNContactSuggestionViewControllerDataSource> {

	CNLabeledValue* _labeledValue;

}

@property (nonatomic,retain) CNLabeledValue * labeledValue;                        //@synthesize labeledValue=_labeledValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * appName; 
@property (nonatomic,readonly) NSAttributedString * formattedSnippet; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * date; 
@property (nonatomic,readonly) NSString * from; 
@property (nonatomic,readonly) NSURL * url; 
-(unsigned long long)type;
-(NSString *)date;
-(NSURL *)url;
-(NSString *)title;
-(NSString *)from;
-(NSString *)appName;
-(CNLabeledValue *)labeledValue;
-(void)setLabeledValue:(CNLabeledValue *)arg1 ;
-(NSAttributedString *)formattedSnippet;
-(id)initWithLabeledValue:(id)arg1 ;
@end

