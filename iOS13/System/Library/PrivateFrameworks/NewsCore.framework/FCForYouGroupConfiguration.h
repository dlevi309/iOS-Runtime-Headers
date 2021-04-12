/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCForYouGroupConfiguration : NSObject <NSCopying> {

	BOOL _allowsNativeAds;
	long long _groupType;
	NSString* _identifier;
	unsigned long long _groupPosition;
	unsigned long long _precedingGroupsCountForFirstGroup;
	unsigned long long _precedingGroupsCount;

}

@property (assign,nonatomic) long long groupType;                                               //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL allowsNativeAds;                                              //@synthesize allowsNativeAds=_allowsNativeAds - In the implementation block
@property (assign,nonatomic) unsigned long long groupPosition;                                  //@synthesize groupPosition=_groupPosition - In the implementation block
@property (assign,nonatomic) unsigned long long precedingGroupsCount;                           //@synthesize precedingGroupsCount=_precedingGroupsCount - In the implementation block
@property (assign,nonatomic) unsigned long long precedingGroupsCountForFirstGroup;              //@synthesize precedingGroupsCountForFirstGroup=_precedingGroupsCountForFirstGroup - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)groupType;
-(void)setGroupType:(long long)arg1 ;
-(unsigned long long)groupPosition;
-(void)setGroupPosition:(unsigned long long)arg1 ;
-(unsigned long long)precedingGroupsCount;
-(unsigned long long)precedingGroupsCountForFirstGroup;
-(id)copyWithGroupPosition:(unsigned long long)arg1 precedingGroupsCount:(unsigned long long)arg2 precedingGroupsCountForFirstGroup:(unsigned long long)arg3 ;
-(long long)compareGroupPosition:(id)arg1 ;
-(void)setPrecedingGroupsCount:(unsigned long long)arg1 ;
-(void)setPrecedingGroupsCountForFirstGroup:(unsigned long long)arg1 ;
-(BOOL)allowsNativeAds;
-(void)setAllowsNativeAds:(BOOL)arg1 ;
@end

