/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDisplaySuggestion.h>

@class NSString, NSDictionary, NSDate, PHAsset;

@interface PXMockDisplaySingleAssetSuggestion : NSObject <PXDisplaySuggestion> {

	unsigned short _type;
	unsigned short _subtype;
	unsigned short _state;
	NSString* _title;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	NSDictionary* _actionProperties;
	PHAsset* _asset;

}

@property (nonatomic,readonly) PHAsset * asset;                              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) unsigned short state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned short type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short subtype;                       //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,copy,readonly) NSString * localIdentifier; 
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedSubtitle;                 //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionProperties;              //@synthesize actionProperties=_actionProperties - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned short)subtype;
-(NSString *)localIdentifier;
-(NSString *)localizedTitle;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(PHAsset *)asset;
-(id)initWithAsset:(id)arg1 type:(unsigned short)arg2 subtype:(unsigned short)arg3 title:(id)arg4 ;
-(id)fetchKeyAssets;
-(NSString *)localizedSubtitle;
-(NSDictionary *)actionProperties;
-(unsigned short)type;
-(unsigned short)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

