/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@class NSSet;

@interface CNVCardFilteredPersonScope : NSObject {

	NSSet* _blacklist;
	unsigned long long _filterOptions;

}

@property (readonly) NSSet * blacklist;                             //@synthesize blacklist=_blacklist - In the implementation block
@property (readonly) unsigned long long filterOptions;              //@synthesize filterOptions=_filterOptions - In the implementation block
-(unsigned long long)filterOptions;
-(BOOL)isEmpty;
-(NSSet *)blacklist;
-(id)initWithBlacklist:(id)arg1 options:(unsigned long long)arg2 ;
@end

