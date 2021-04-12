/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSString, NSMutableSet;

@interface STUniquedManagedObjectDelta : NSObject {

	NSString* _uniqueIdentifier;
	long long _changeType;
	NSMutableSet* _updatedProperties;

}

@property (nonatomic,retain) NSMutableSet * updatedProperties;                //@synthesize updatedProperties=_updatedProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long changeType;                          //@synthesize changeType=_changeType - In the implementation block
-(long long)changeType;
-(NSString *)uniqueIdentifier;
-(void)deleted;
-(NSMutableSet *)updatedProperties;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(void)inserted;
-(void)setUpdatedProperties:(NSMutableSet *)arg1 ;
-(void)removePropertyWithName:(id)arg1 ;
-(void)updatedWithProperties:(id)arg1 ;
@end

