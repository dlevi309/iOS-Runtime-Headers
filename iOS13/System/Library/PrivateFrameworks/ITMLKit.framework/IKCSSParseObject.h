/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class IKArray;

@interface IKCSSParseObject : NSObject {

	IKArray* _cssValue;
	long long _type;
	NSRange _range;

}

@property (nonatomic,retain) IKArray * cssValue;              //@synthesize cssValue=_cssValue - In the implementation block
@property (assign,nonatomic) long long type;                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) NSRange range;                   //@synthesize range=_range - In the implementation block
+(id)stringifyList:(id)arg1 ;
-(id)init;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(IKArray *)cssValue;
-(void)setCssValue:(IKArray *)arg1 ;
@end

