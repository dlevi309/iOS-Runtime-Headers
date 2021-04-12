/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSString;

@interface AVTCoreModelPairing : NSObject {

	long long _pairedCategory;
	NSString* _localizedPairedTitle;
	NSString* _localizedPairTitle;
	NSString* _localizedUnpairTitle;
	NSString* _localizedPairedDescription;
	NSString* _localizedUnpairedDescription;

}

@property (nonatomic,readonly) long long pairedCategory;                                  //@synthesize pairedCategory=_pairedCategory - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPairedTitle;                      //@synthesize localizedPairedTitle=_localizedPairedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPairTitle;                        //@synthesize localizedPairTitle=_localizedPairTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedUnpairTitle;                      //@synthesize localizedUnpairTitle=_localizedUnpairTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedPairedDescription;                //@synthesize localizedPairedDescription=_localizedPairedDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedUnpairedDescription;              //@synthesize localizedUnpairedDescription=_localizedUnpairedDescription - In the implementation block
-(id)initWithPairedCategory:(long long)arg1 pairedTitle:(id)arg2 pairTitle:(id)arg3 unpairTitle:(id)arg4 pairedDescription:(id)arg5 unpairedDescription:(id)arg6 ;
-(NSString *)localizedPairTitle;
-(NSString *)localizedPairedDescription;
-(long long)pairedCategory;
-(NSString *)localizedUnpairTitle;
-(NSString *)localizedUnpairedDescription;
-(id)description;
-(NSString *)localizedPairedTitle;
@end

