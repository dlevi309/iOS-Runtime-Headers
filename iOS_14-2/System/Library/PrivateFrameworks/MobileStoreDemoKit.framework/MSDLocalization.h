/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
*/


@class NSDictionary;

@interface MSDLocalization : NSObject {

	NSDictionary* _localizationTable;

}

@property (nonatomic,retain) NSDictionary * localizationTable;              //@synthesize localizationTable=_localizationTable - In the implementation block
+(id)sharedInstance;
+(void)fillInMissingLocales:(id)arg1 withOwnershipWarningMsg:(id)arg2 andKey:(id)arg3 ;
+(id)getLocalizedOwnershipWarnings:(id)arg1 ;
-(id)init;
-(NSDictionary *)localizationTable;
-(id)localizedStringWithKey:(id)arg1 defaultString:(id)arg2 ;
-(void)setLocalizationTable:(NSDictionary *)arg1 ;
@end

