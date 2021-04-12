/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/


@class NSManagedObjectContext, NSManagedObject, NSUUID, NSDate;

@interface MapsSync.MapsSyncMutableBaseItem : NSObject {

	 _proxyObject;

}

@property (readonly,nonatomic) NSManagedObjectContext * context; 
@property (readonly,nonatomic) NSManagedObject * proxyObject; 
@property (copy,nonatomic) NSUUID * identifier; 
@property (copy,nonatomic) NSDate * createTime; 
@property (assign,nonatomic) long long positionIndex; 
-(id)init;
-(NSDate *)createTime;
-(void)setCreateTime:(NSDate *)arg1 ;
-(NSManagedObjectContext *)context;
-(NSManagedObject *)proxyObject;
-(void)setPositionIndex:(long long)arg1 ;
-(long long)positionIndex;
-(id)initWithProxyObject:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
@end

