/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSManagedObjectID *)objectID;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(NSManagedObjectContext *)moc;
-(id)childManagedObject;
-(id)secondaryOrderSortKey;
-(long long)orderValue;
-(void)setOrderValue:(long long)arg1 ;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
@end

