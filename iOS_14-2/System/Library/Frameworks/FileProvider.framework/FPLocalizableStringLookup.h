/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)localizedStringForKey:(id)arg1 ;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSString *)tableName;
-(id)cfBundle;
-(void)setCfBundle:(id)arg1 ;
-(void)setTableName:(NSString *)arg1 ;
@end

