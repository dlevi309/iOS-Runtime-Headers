/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


#import <ContentKit/ContentKit-Structs.h>
@class NSMutableString, NSString;

@interface WFPDFTextContainer : NSObject {

	NSMutableString* _string;
	CGAffineTransform _transform;

}

@property (nonatomic,retain) NSMutableString * string;                 //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) NSString * text; 
-(id)init;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(NSString *)text;
-(NSMutableString *)string;
-(void)setString:(NSMutableString *)arg1 ;
-(void)addOperator:(id)arg1 ;
-(long long)compareTransformToTextContainer:(id)arg1 ;
@end

