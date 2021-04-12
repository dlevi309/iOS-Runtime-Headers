/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreFoundation/NSArray.h>

@class MLSequence;

@interface MLSequnceAsFeatureValueArray : NSArray {

	MLSequence* _sequence;

}

@property (nonatomic,readonly) MLSequence * sequence;              //@synthesize sequence=_sequence - In the implementation block
-(id)initWrappingSequence:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(MLSequence *)sequence;
@end

