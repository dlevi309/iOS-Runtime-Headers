/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSOrthography.h>

@class NSString, NSDictionary;

@interface NSComplexOrthography : NSOrthography {

	NSString* _dominantScript;
	NSDictionary* _languageMap;
	unsigned _orthographyFlags;

}
+(void)initialize;
-(id)languageMap;
-(id)dominantScript;
-(unsigned)orthographyFlags;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(void)dealloc;
@end

