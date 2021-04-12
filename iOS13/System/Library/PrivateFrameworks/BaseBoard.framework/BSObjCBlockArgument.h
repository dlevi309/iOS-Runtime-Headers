/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)argumentWithSignature:(id)arg1 atIndex:(long long)arg2 ;
-(NSArray *)arguments;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_prettyTypeString;
-(BOOL)isBlock;
-(BSObjCArgument *)returnValue;
@end

