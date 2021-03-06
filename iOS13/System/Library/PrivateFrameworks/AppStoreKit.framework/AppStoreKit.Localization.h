/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AppStoreKit/AppStoreKit.LocalizationProtocol.h>

@class NSString;

@interface AppStoreKit.Localization : NSObject <AppStoreKit.LocalizationProtocol> {

	??? locale;
	??? extendedLocale;
	 localizedStringTables;
	 dateFormatters;
	 dynamicDateFormatters;
	 $__lazy_storage_$_relativeDateFormatter;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSString * arcadeWordmarkAssetName; 
-(id)init;
-(NSString *)identifier;
-(id)fileSize:(id)arg1 ;
-(id)formattedCount:(id)arg1 ;
-(NSString *)arcadeWordmarkAssetName;
-(id)decimal:(id)arg1 :(long long)arg2 ;
-(id)string:(id)arg1 ;
-(id)stringWithCount:(id)arg1 :(long long)arg2 ;
-(id)stringWithCounts:(id)arg1 :(id)arg2 ;
-(id)timeAgo:(id)arg1 ;
-(id)formatDate:(id)arg1 :(id)arg2 ;
-(id)formatDateInSentence:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)relativeDate:(id)arg1 ;
@end

