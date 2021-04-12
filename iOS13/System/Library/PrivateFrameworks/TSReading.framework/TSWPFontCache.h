/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSULRUCache, NSArray, NSMutableDictionary, NSMutableArray, NSString;

@interface TSWPFontCache : NSObject {

	TSULRUCache* _fontCache;
	NSArray* _familyNames;
	NSMutableDictionary* _familyDisplayNames;
	NSArray* _familyFonts;
	NSMutableArray* _cachedAvailableMembers;
	NSString* _cachedMembersFamilyName;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedCache;
+(id)_singletonAlloc;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)p_FontWasDownloaded:(id)arg1 ;
-(CTFontRef)_createFontWithName:(id)arg1 size:(double)arg2 weight:(double)arg3 ;
-(id)p_excludedFamilyNames;
-(id)sortedFontFamilies;
-(CTFontRef)createFontWithName:(id)arg1 size:(double)arg2 weight:(double)arg3 attributes:(id)arg4 ;
-(id)sortedFontFamilyEntriesForStylesheet:(id)arg1 ;
-(id)displayNameForFontFamily:(id)arg1 ;
-(id)availableMembersOfFontFamily:(id)arg1 ;
@end

