/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@class NSArray, NSData;

@interface CPSearchMatcher : NSObject {

	int _options;
	NSArray* _components;
	NSArray* _asciiComponents;
	NSData* _wholeSearchStringData;
	NSData* _context;

}
-(void)dealloc;
-(BOOL)matches:(id)arg1 ;
-(BOOL)matchesUTF8String:(const char*)arg1 matchType:(int)arg2 matchOptions:(int)arg3 ;
-(BOOL)matchesASCIIString:(const char*)arg1 matchType:(int)arg2 ;
-(BOOL)matchesUTF8String:(const char*)arg1 ;
-(BOOL)matchesUTF8String:(const char*)arg1 matchType:(int)arg2 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3 ;
-(BOOL)matches:(id)arg1 matchType:(int)arg2 ;
-(id)initWithSearchString:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 options:(int)arg2 ;
@end

