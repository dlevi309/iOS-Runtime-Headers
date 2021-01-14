/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WebBookmark, NSString;

@interface _SFFolderPickerItem : NSObject {

	WebBookmark* _bookmark;
	unsigned long long _depth;

}

@property (nonatomic,readonly) WebBookmark * bookmark;                //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) unsigned long long depth;              //@synthesize depth=_depth - In the implementation block
-(WebBookmark *)bookmark;
-(id)_initWithBookmark:(id)arg1 depth:(unsigned long long)arg2 ;
-(unsigned long long)depth;
-(NSString *)title;
@end

