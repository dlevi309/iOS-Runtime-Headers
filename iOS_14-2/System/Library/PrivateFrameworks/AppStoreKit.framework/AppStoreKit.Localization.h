/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AppStoreKit/AppStoreKit.LocalizationProtocol.h>

@class NSString;

@interface AppStoreKit.Localization : NSObject <AppStoreKit.LocalizationProtocol> {

	 localizedStringTables;
	 dateFormatters;
	 dynamicDateFormatters;
	 $__lazy_storage_$_relativeDateFormatter;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSString * arcadeWordmarkAssetName; 
-(id)init;
-(NSString *)arcadeWordmarkAssetName;
-(id)stringWithCount:(id)arg1 :(long long)arg2 ;
-(id)fileSize:(id)arg1 ;
-(id)string:(id)arg1 ;
-(id)formatDate:(id)arg1 :(id)arg2 ;
-(id)formattedCount:(id)arg1 ;
-(id)relativeDate:(id)arg1 ;
-(id)stringWithCounts:(id)arg1 :(id)arg2 ;
-(NSString *)identifier;
-(id)decimal:(id)arg1 :(long long)arg2 ;
-(id)formatDateInSentence:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)timeAgo:(id)arg1 ;
@end

