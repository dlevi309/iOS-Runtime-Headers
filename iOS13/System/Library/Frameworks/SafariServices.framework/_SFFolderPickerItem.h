/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)depth;
-(NSString *)title;
-(WebBookmark *)bookmark;
-(id)_initWithBookmark:(id)arg1 depth:(unsigned long long)arg2 ;
@end

