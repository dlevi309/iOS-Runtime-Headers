/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface _NSCallStackArray : NSArray {

	void* _frames;
	unsigned long long _cnt;
	unsigned long long _ignore;
	char** _pcstrs;
	BOOL _wantSyms;

}
+(id)arrayWithFrames:(void*)arg1 count:(unsigned long long)arg2 symbols:(BOOL)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

