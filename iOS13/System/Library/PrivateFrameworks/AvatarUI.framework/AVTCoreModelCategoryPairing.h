/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSString;

@interface AVTCoreModelCategoryPairing : NSObject {

	long long _pairedCategory;
	NSString* _localizedPairedTitle;
	NSString* _localizedPairTitle;
	NSString* _localizedUnpairTitle;

}

@property (nonatomic,readonly) long long pairedCategory;                          //@synthesize pairedCategory=_pairedCategory - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPairedTitle;              //@synthesize localizedPairedTitle=_localizedPairedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPairTitle;                //@synthesize localizedPairTitle=_localizedPairTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedUnpairTitle;              //@synthesize localizedUnpairTitle=_localizedUnpairTitle - In the implementation block
-(id)initWithPairedCategory:(long long)arg1 pairedTitle:(id)arg2 pairTitle:(id)arg3 unpairTitle:(id)arg4 ;
-(NSString *)localizedPairTitle;
-(long long)pairedCategory;
-(NSString *)localizedUnpairTitle;
-(NSString *)localizedPairedTitle;
@end

