/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BSObjCArgument.h>

@class NSArray, BSObjCArgument;

@interface BSObjCBlockArgument : BSObjCArgument {

	NSArray* _arguments;
	BSObjCArgument* _returnValue;

}

@property (nonatomic,retain,readonly) BSObjCArgument * returnValue;              //@synthesize returnValue=_returnValue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * arguments;                         //@synthesize arguments=_arguments - In the implementation block
-(BOOL)isBlock;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BSObjCArgument *)returnValue;
-(NSArray *)arguments;
-(id)_prettyTypeString;
@end

