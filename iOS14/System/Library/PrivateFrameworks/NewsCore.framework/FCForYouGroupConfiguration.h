/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGroupType:(long long)arg1 ;
-(id)copyWithGroupPosition:(unsigned long long)arg1 precedingGroupsCount:(unsigned long long)arg2 precedingGroupsCountForFirstGroup:(unsigned long long)arg3 ;
-(void)setPrecedingGroupsCount:(unsigned long long)arg1 ;
-(unsigned long long)precedingGroupsCount;
-(long long)groupType;
-(void)setAllowsNativeAds:(BOOL)arg1 ;
-(long long)compareGroupPosition:(id)arg1 ;
-(BOOL)allowsNativeAds;
-(unsigned long long)precedingGroupsCountForFirstGroup;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setPrecedingGroupsCountForFirstGroup:(unsigned long long)arg1 ;
-(void)setGroupPosition:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)groupPosition;
@end

