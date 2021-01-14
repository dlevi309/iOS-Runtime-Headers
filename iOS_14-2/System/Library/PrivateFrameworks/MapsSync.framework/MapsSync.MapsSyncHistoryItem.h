/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@interface MapsSync.MapsSyncHistoryItem : MapsSync.MapsSyncBaseItem {

	 _position;

}

@property (readonly,nonatomic) double position; 
+(void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
+(id)fetchHistoryItemForIdentifier:(id)arg1 ;
-(double)position;
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(void)setPropertiesWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

