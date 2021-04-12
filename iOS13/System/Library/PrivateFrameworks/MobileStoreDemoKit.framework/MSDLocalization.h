/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
*/


@class NSDictionary;

@interface MSDLocalization : NSObject {

	NSDictionary* _localizationTable;

}

@property (nonatomic,retain) NSDictionary * localizationTable;              //@synthesize localizationTable=_localizationTable - In the implementation block
+(id)sharedInstance;
+(id)getLocalizedOwnershipWarnings;
-(id)init;
-(NSDictionary *)localizationTable;
-(id)localizedStringWithKey:(id)arg1 defaultString:(id)arg2 ;
-(void)setLocalizationTable:(NSDictionary *)arg1 ;
@end

