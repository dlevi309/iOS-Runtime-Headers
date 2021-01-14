/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

