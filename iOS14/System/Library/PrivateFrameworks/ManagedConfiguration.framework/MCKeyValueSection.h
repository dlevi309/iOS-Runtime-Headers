/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class NSString, NSArray;

@interface MCKeyValueSection : NSObject {

	NSString* _sectionTitle;
	NSString* _sectionFooter;
	NSArray* _sectionKeyValues;

}

@property (nonatomic,retain) NSString * sectionTitle;                 //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) NSString * sectionFooter;                //@synthesize sectionFooter=_sectionFooter - In the implementation block
@property (nonatomic,retain) NSArray * sectionKeyValues;              //@synthesize sectionKeyValues=_sectionKeyValues - In the implementation block
+(id)sectionWithKeyValues:(id)arg1 ;
+(id)sectionWithLocalizedArray:(id)arg1 title:(id)arg2 footer:(id)arg3 ;
-(NSString *)sectionTitle;
-(id)initWithSectionTitle:(id)arg1 footer:(id)arg2 keyValues:(id)arg3 ;
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionFooter;
-(void)setSectionFooter:(NSString *)arg1 ;
-(NSArray *)sectionKeyValues;
-(void)setSectionKeyValues:(NSArray *)arg1 ;
@end

