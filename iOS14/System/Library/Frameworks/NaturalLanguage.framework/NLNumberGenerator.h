/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

