/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
*/


@class CommunicationFilterItem;

@interface CommunicationFilterItemCache : NSObject {

	CommunicationFilterItem* _filterItem;
	long long _isInList;

}

@property (assign,nonatomic) long long isInList;              //@synthesize isInList=_isInList - In the implementation block
-(void)setIsInList:(long long)arg1 ;
-(BOOL)matchesItem:(id)arg1 ;
-(long long)isInList;
-(id)initWithFilterItem:(id)arg1 isInList:(long long)arg2 ;
-(void)dealloc;
@end

