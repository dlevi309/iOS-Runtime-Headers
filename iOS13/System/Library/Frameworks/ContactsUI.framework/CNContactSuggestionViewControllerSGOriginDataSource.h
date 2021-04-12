/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactSuggestionViewControllerDataSource.h>

@class NSString, NSAttributedString, NSURL, SGOrigin;

@interface CNContactSuggestionViewControllerSGOriginDataSource : NSObject <CNContactSuggestionViewControllerDataSource> {

	SGOrigin* _origin;

}

@property (nonatomic,retain) SGOrigin * origin;                                    //@synthesize origin=_origin - In the implementation block
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
+(id)dateFormatter;
+(id)contactSuggestionTypeBySuggestionType;
-(unsigned long long)type;
-(NSString *)date;
-(NSURL *)url;
-(NSString *)title;
-(SGOrigin *)origin;
-(NSString *)from;
-(void)setOrigin:(SGOrigin *)arg1 ;
-(NSString *)appName;
-(NSAttributedString *)formattedSnippet;
-(id)initWithSGOrigin:(id)arg1 ;
@end

