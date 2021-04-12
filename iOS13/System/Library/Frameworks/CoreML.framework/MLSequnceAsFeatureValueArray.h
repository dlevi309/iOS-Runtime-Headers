/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreFoundation/NSArray.h>

@class MLSequence;

@interface MLSequnceAsFeatureValueArray : NSArray {

	MLSequence* _sequence;

}

@property (nonatomic,readonly) MLSequence * sequence;              //@synthesize sequence=_sequence - In the implementation block
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(MLSequence *)sequence;
-(id)initWrappingSequence:(id)arg1 ;
@end

