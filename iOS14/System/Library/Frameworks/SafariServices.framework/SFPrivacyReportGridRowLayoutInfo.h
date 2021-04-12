/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


#import <SafariServices/SafariServices-Structs.h>
@interface SFPrivacyReportGridRowLayoutInfo : NSObject {

	long long _row;
	double _height;
	NSRange _itemRange;

}

@property (nonatomic,readonly) long long row;                  //@synthesize row=_row - In the implementation block
@property (nonatomic,readonly) NSRange itemRange;              //@synthesize itemRange=_itemRange - In the implementation block
@property (assign,nonatomic) double height;                    //@synthesize height=_height - In the implementation block
-(void)setHeight:(double)arg1 ;
-(id)initWithRow:(long long)arg1 itemRange:(NSRange)arg2 ;
-(long long)row;
-(double)height;
-(NSRange)itemRange;
@end

