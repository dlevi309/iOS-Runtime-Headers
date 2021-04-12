/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
*/


@class CommunicationFilterItem;

@interface CommunicationFilterItemCache : NSObject {

	CommunicationFilterItem* _filterItem;
	long long _isInList;

}

@property (assign,nonatomic) long long isInList;              //@synthesize isInList=_isInList - In the implementation block
-(void)dealloc;
-(id)initWithFilterItem:(id)arg1 isInList:(long long)arg2 ;
-(BOOL)matchesItem:(id)arg1 ;
-(long long)isInList;
-(void)setIsInList:(long long)arg1 ;
@end

