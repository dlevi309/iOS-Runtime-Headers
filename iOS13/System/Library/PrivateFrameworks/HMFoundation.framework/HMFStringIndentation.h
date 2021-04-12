/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@interface HMFStringIndentation : HMFObject {

	unsigned long long _width;
	unsigned long long _level;

}

@property (readonly) unsigned long long width;              //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long level;              //@synthesize level=_level - In the implementation block
+(id)indentation;
+(id)indentationWithWidth:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)level;
-(id)initWithWidth:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(id)indentationByLevels:(long long)arg1 ;
@end

