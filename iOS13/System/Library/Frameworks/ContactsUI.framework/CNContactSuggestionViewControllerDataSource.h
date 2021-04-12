/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

@class NSString, NSAttributedString, NSURL;


@protocol CNContactSuggestionViewControllerDataSource <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * appName; 
@property (nonatomic,readonly) NSAttributedString * formattedSnippet; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * date; 
@property (nonatomic,readonly) NSString * from; 
@property (nonatomic,readonly) NSURL * url; 
@required
-(unsigned long long)type;
-(NSString *)date;
-(NSURL *)url;
-(NSString *)title;
-(NSString *)from;
-(NSString *)appName;
-(NSAttributedString *)formattedSnippet;

@end

