/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@interface NLNumberGenerator : NSObject {

	unsigned long long state[2];

}
-(id)init;
-(void)reset;
-(unsigned long long)numberInRange:(NSRange)arg1 ;
-(void)resetWithSeed:(unsigned long long)arg1 ;
@end

