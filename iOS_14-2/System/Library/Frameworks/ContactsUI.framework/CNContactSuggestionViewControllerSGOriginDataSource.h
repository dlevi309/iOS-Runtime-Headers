/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNContactSuggestionViewControllerDataSource.h>

@class NSString, NSAttributedString, NSURL, SGOrigin;

@interface CNContactSuggestionViewControllerSGOriginDataSource : NSObject <CNContactSuggestionViewControllerDataSource> {

	SGOrigin* _origin;

}

@property (nonatomic,retain) SGOrigin * origin;                                    //@synthesize origin=_origin - In the implementation block
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
+(id)dateFormatter;
+(id)contactSuggestionTypeBySuggestionType;
-(void)setOrigin:(SGOrigin *)arg1 ;
-(NSString *)from;
-(SGOrigin *)origin;
-(NSAttributedString *)formattedSnippet;
-(id)initWithSGOrigin:(id)arg1 ;
-(NSURL *)url;
-(unsigned long long)type;
-(NSString *)date;
-(NSString *)appName;
-(NSString *)title;
@end

