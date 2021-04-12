/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class NSString, NSURL;

@interface SUCompletionItem : NSObject {

	NSString* _alternateTitle;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * alternateTitle;              //@synthesize alternateTitle=_alternateTitle - In the implementation block
@property (nonatomic,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                            //@synthesize url=_url - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithPropertyList:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(NSString *)alternateTitle;
@end

