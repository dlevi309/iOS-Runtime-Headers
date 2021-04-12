/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSSet;

@interface HFAccessoryProfileFilterOptions : NSObject {

	BOOL _byFavorites;
	NSSet* _byAccessories;
	NSSet* _byCategoryTypes;
	NSSet* _byClasses;
	NSSet* _byManufacturers;
	NSSet* _byModels;
	NSSet* _byRooms;
	/*^block*/id _byFilter;

}

@property (nonatomic,copy) NSSet * byAccessories;                //@synthesize byAccessories=_byAccessories - In the implementation block
@property (nonatomic,copy) NSSet * byCategoryTypes;              //@synthesize byCategoryTypes=_byCategoryTypes - In the implementation block
@property (nonatomic,copy) NSSet * byClasses;                    //@synthesize byClasses=_byClasses - In the implementation block
@property (assign,nonatomic) BOOL byFavorites;                   //@synthesize byFavorites=_byFavorites - In the implementation block
@property (nonatomic,copy) NSSet * byManufacturers;              //@synthesize byManufacturers=_byManufacturers - In the implementation block
@property (nonatomic,copy) NSSet * byModels;                     //@synthesize byModels=_byModels - In the implementation block
@property (nonatomic,copy) NSSet * byRooms;                      //@synthesize byRooms=_byRooms - In the implementation block
@property (nonatomic,copy) id byFilter;                          //@synthesize byFilter=_byFilter - In the implementation block
-(void)setByClasses:(NSSet *)arg1 ;
-(NSSet *)byAccessories;
-(void)setByAccessories:(NSSet *)arg1 ;
-(NSSet *)byCategoryTypes;
-(void)setByCategoryTypes:(NSSet *)arg1 ;
-(NSSet *)byClasses;
-(BOOL)byFavorites;
-(void)setByFavorites:(BOOL)arg1 ;
-(NSSet *)byManufacturers;
-(void)setByManufacturers:(NSSet *)arg1 ;
-(NSSet *)byModels;
-(void)setByModels:(NSSet *)arg1 ;
-(NSSet *)byRooms;
-(void)setByRooms:(NSSet *)arg1 ;
-(id)byFilter;
-(void)setByFilter:(id)arg1 ;
@end

