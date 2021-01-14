/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactSuggestionViewControllerDataSource.h>

@class CNLabeledValue, NSString, NSAttributedString, NSURL;

@interface CNContactSuggestionViewControllerLabeledValueDataSource : NSObject <CNContactSuggestionViewControllerDataSource> {

	CNLabeledValue* _labeledValue;

}

@property (nonatomic,retain) CNLabeledValue * labeledValue;                        //@synthesize labeledValue=_labeledValue - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * appName; 
@property (nonatomic,readonly) NSAttributedString * formattedSnippet; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * date; 
@property (nonatomic,readonly) NSString * from; 
@property (nonatomic,readonly) NSURL * url; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)from;
-(NSAttributedString *)formattedSnippet;
-(NSURL *)url;
-(unsigned long long)type;
-(CNLabeledValue *)labeledValue;
-(NSString *)date;
-(NSString *)appName;
-(id)initWithLabeledValue:(id)arg1 ;
-(void)setLabeledValue:(CNLabeledValue *)arg1 ;
-(NSString *)title;
@end

