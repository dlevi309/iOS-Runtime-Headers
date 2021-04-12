/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSBundle, NSString;

@interface FPLocalizableStringLookup : NSObject {

	NSBundle* _bundle;
	id _cfBundle;
	NSString* _tableName;

}

@property (nonatomic,retain) NSBundle * bundle;               //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) id cfBundle;                     //@synthesize cfBundle=_cfBundle - In the implementation block
@property (nonatomic,copy) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(id)cfBundle;
-(id)localizedStringForKey:(id)arg1 ;
-(NSString *)tableName;
-(void)setTableName:(NSString *)arg1 ;
-(void)setCfBundle:(id)arg1 ;
@end

