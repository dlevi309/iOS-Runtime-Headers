/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSManagedObjectID, NSManagedObjectContext;

@interface PLTransientOrderKey : NSObject {

	long long _orderValue;
	NSManagedObjectID* _objectID;
	NSManagedObjectContext* _moc;

}

@property (nonatomic,retain) NSManagedObjectContext * moc;              //@synthesize moc=_moc - In the implementation block
@property (assign,nonatomic) long long orderValue;                      //@synthesize orderValue=_orderValue - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
-(NSManagedObjectContext *)moc;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectID *)objectID;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(id)childManagedObject;
-(id)description;
-(long long)orderValue;
-(void)setOrderValue:(long long)arg1 ;
-(id)secondaryOrderSortKey;
@end

