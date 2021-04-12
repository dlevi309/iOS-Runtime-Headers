/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@class NSAttributedString, NSDictionary;

@interface QLStringWrapper : NSObject {

	NSAttributedString* _string;
	NSDictionary* _attributes;

}

@property (retain) NSAttributedString * string;              //@synthesize string=_string - In the implementation block
@property (retain) NSDictionary * attributes;                //@synthesize attributes=_attributes - In the implementation block
-(NSAttributedString *)string;
-(void)setString:(NSAttributedString *)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
@end

