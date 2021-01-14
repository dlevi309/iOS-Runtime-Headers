/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSUUID, PHFetchResult, NSString;

@interface PUAssetPickerSectionData : NSObject {

	NSUUID* _identifier;
	unsigned long long _layoutType;
	long long _priority;
	PHFetchResult* _fetchResult;
	unsigned long long _cellType;
	NSString* _localizedTitle;

}

@property (nonatomic,readonly) NSUUID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutType;              //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) long long priority;                         //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) PHFetchResult * fetchResult;                //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) unsigned long long cellType;                //@synthesize cellType=_cellType - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                  //@synthesize localizedTitle=_localizedTitle - In the implementation block
-(PHFetchResult *)fetchResult;
-(unsigned long long)layoutType;
-(NSString *)localizedTitle;
-(unsigned long long)cellType;
-(id)init;
-(id)description;
-(id)initWithIdentifier:(id)arg1 layoutType:(unsigned long long)arg2 priority:(long long)arg3 fetchResult:(id)arg4 cellType:(unsigned long long)arg5 localizedTitle:(id)arg6 ;
-(id)initWithIdentifier:(id)arg1 layoutType:(unsigned long long)arg2 fetchResult:(id)arg3 cellType:(unsigned long long)arg4 localizedTitle:(id)arg5 ;
-(NSUUID *)identifier;
-(long long)priority;
@end

