/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSParseObject.h>

@class IKArray, IKCSSParseBlock;

@interface IKCSSParseRule : IKCSSParseObject {

	IKArray* _prelude;
	IKCSSParseBlock* _block;
	NSRange __endRange;

}

@property (assign,setter=_setEndRange:,nonatomic) NSRange _endRange;              //@synthesize _endRange=__endRange - In the implementation block
@property (nonatomic,retain) IKArray * prelude;                                   //@synthesize prelude=_prelude - In the implementation block
@property (nonatomic,retain) IKCSSParseBlock * block;                             //@synthesize block=_block - In the implementation block
-(IKCSSParseBlock *)block;
-(id)init;
-(NSRange)range;
-(void)setBlock:(IKCSSParseBlock *)arg1 ;
-(id)description;
-(IKArray *)prelude;
-(NSRange)_endRange;
-(void)setPrelude:(IKArray *)arg1 ;
-(void)_setEndRange:(NSRange)arg1 ;
@end

