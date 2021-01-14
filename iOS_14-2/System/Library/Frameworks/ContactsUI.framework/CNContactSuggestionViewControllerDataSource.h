/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)from;
-(NSAttributedString *)formattedSnippet;
-(NSURL *)url;
-(unsigned long long)type;
-(NSString *)date;
-(NSString *)appName;
-(NSString *)title;

@end

