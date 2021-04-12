/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@class NSSet;

@interface CNVCardFilteredPersonScope : NSObject {

	NSSet* _blacklist;
	unsigned long long _filterOptions;

}

@property (readonly) NSSet * blacklist;                             //@synthesize blacklist=_blacklist - In the implementation block
@property (readonly) unsigned long long filterOptions;              //@synthesize filterOptions=_filterOptions - In the implementation block
-(BOOL)isEmpty;
-(unsigned long long)filterOptions;
-(NSSet *)blacklist;
-(id)initWithBlacklist:(id)arg1 options:(unsigned long long)arg2 ;
@end

