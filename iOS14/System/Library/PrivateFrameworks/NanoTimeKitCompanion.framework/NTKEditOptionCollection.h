/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSString, NSArray;

@interface NTKEditOptionCollection : NSObject {

	long long _mode;
	NSString* _localizedName;
	NSArray* _options;
	unsigned long long _collectionType;
	NSString* _slot;

}

@property (nonatomic,readonly) long long swatchStyle; 
@property (nonatomic,readonly) NSString * optionsDescription; 
@property (assign,nonatomic) long long mode;                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                         //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSArray * options;                                //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long collectionType;              //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,copy) NSString * slot;                                  //@synthesize slot=_slot - In the implementation block
+(id)editOptionCollectionWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(long long)mode;
-(NSArray *)options;
-(void)setMode:(long long)arg1 ;
-(void)setOptions:(NSArray *)arg1 ;
-(void)setSlot:(NSString *)arg1 ;
-(unsigned long long)collectionType;
-(void)setCollectionType:(unsigned long long)arg1 ;
-(NSString *)slot;
-(BOOL)isEqual:(id)arg1 ;
-(long long)swatchStyle;
-(NSString *)optionsDescription;
-(id)initWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4 ;
-(id)filteredCollectionForDevice:(id)arg1 ;
-(id)initWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4 slot:(id)arg5 ;
-(id)filteredCollectionWithObjectsPassingTest:(/*^block*/id)arg1 ;
@end

