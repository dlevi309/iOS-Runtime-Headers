/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSAttributedString, NSString;

@interface _MKTokenAttributedString : NSObject {

	NSAttributedString* _attributedString;
	NSString* _string;

}

@property (nonatomic,copy) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,copy) NSString * string;                                  //@synthesize string=_string - In the implementation block
-(NSString *)string;
-(id)description;
-(BOOL)isEmpty;
-(void)setString:(NSString *)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
@end

