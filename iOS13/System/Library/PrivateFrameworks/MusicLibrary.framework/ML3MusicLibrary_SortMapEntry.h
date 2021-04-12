/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSString, NSData;

@interface ML3MusicLibrary_SortMapEntry : NSObject {

	long long _nameOrder;
	NSString* _name;
	NSData* _sortKey;
	int _nameSection;
	BOOL _dirty;

}
-(id)description;
-(id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3 nameOrder:(long long)arg4 dirtyFlag:(BOOL)arg5 ;
-(id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3 ;
@end

