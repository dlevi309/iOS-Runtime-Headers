/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSString;

@interface MFPopupButtonItem : NSObject {

	NSString* _title;
	long long _style;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;               //@synthesize style=_style - In the implementation block
+(id)itemWithTitle:(id)arg1 ;
+(id)itemWithTitle:(id)arg1 style:(long long)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)copy;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

