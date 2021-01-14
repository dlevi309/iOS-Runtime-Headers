/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRange:(NSRange)arg1 ;
-(id)init;
-(NSRange)range;
-(void)setType:(long long)arg1 ;
-(id)description;
-(long long)type;
-(IKArray *)cssValue;
-(void)setCssValue:(IKArray *)arg1 ;
@end

