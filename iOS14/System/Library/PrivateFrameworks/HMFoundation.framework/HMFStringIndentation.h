/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)width;
-(id)init;
-(id)description;
-(unsigned long long)level;
-(id)initWithWidth:(unsigned long long)arg1 ;
-(id)indentationByLevels:(long long)arg1 ;
@end

