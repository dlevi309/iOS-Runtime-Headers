/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(PSIDate *)startDate;
-(PSIDate *)endDate;
-(NSString *)uuid;
-(NSString *)title;
-(NSString *)subtitle;
-(NSDate *)sortDate;
-(id)initWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 subtitle:(id)arg5 keyAssetUUID:(id)arg6 type:(unsigned long long)arg7 numberOfAssets:(unsigned long long)arg8 sortDate:(id)arg9 ;
-(NSString *)keyAssetUUID;
-(void)setKeyAssetUUID:(NSString *)arg1 ;
-(unsigned long long)numberOfAssets;
@end

