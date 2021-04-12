/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSString, NSArray;

@interface NTKEditOptionCollection : NSObject {

	long long _mode;
	NSString* _localizedName;
	NSArray* _options;
	unsigned long long _collectionType;

}

@property (nonatomic,readonly) long long swatchStyle; 
@property (nonatomic,readonly) NSString * optionsDescription; 
@property (assign,nonatomic) long long mode;                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                         //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSArray * options;                                //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long collectionType;              //@synthesize collectionType=_collectionType - In the implementation block
+(id)editOptionCollectionWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)options;
-(void)setMode:(long long)arg1 ;
-(NSString *)localizedName;
-(void)setOptions:(NSArray *)arg1 ;
-(long long)mode;
-(void)setLocalizedName:(NSString *)arg1 ;
-(unsigned long long)collectionType;
-(void)setCollectionType:(unsigned long long)arg1 ;
-(long long)swatchStyle;
-(NSString *)optionsDescription;
-(id)initWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4 ;
-(id)filteredCollectionForDevice:(id)arg1 ;
-(id)filteredCollectionWithObjectsPassingTest:(/*^block*/id)arg1 ;
@end

