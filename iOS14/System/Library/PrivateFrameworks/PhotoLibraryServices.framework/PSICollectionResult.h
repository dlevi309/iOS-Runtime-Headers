/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PSIDate, NSDate;

@interface PSICollectionResult : NSObject <NSCopying> {

	NSString* _uuid;
	PSIDate* _startDate;
	PSIDate* _endDate;
	NSString* _title;
	NSString* _subtitle;
	NSString* _keyAssetUUID;
	unsigned long long _type;
	unsigned long long _numberOfAssets;
	NSDate* _sortDate;

}

@property (nonatomic,copy,readonly) NSString * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) PSIDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) PSIDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * keyAssetUUID;                            //@synthesize keyAssetUUID=_keyAssetUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAssets;              //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (nonatomic,copy,readonly) NSDate * sortDate;                         //@synthesize sortDate=_sortDate - In the implementation block
-(PSIDate *)endDate;
-(NSString *)uuid;
-(PSIDate *)startDate;
-(NSString *)subtitle;
-(id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAssetUUID:(id)arg6 type:(unsigned long long)arg7 numberOfAssets:(unsigned long long)arg8 sortDate:(id)arg9 ;
-(NSString *)keyAssetUUID;
-(void)setKeyAssetUUID:(NSString *)arg1 ;
-(NSDate *)sortDate;
-(unsigned long long)type;
-(unsigned long long)numberOfAssets;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

