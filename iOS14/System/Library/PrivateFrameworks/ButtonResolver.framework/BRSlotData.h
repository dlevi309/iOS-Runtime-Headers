/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
*/


#import <ButtonResolver/ButtonResolver-Structs.h>
@class NSNumber, BRAsset;

@interface BRSlotData : NSObject {

	BOOL _isProgrammed;
	NSNumber* _slot;
	BRAsset* _asset;
	unsigned long long _refCount;

}

@property (nonatomic,copy) NSNumber * slot;                            //@synthesize slot=_slot - In the implementation block
@property (nonatomic,retain) BRAsset * asset;                          //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) BOOL isProgrammed;                        //@synthesize isProgrammed=_isProgrammed - In the implementation block
@property (assign,nonatomic) unsigned long long refCount;              //@synthesize refCount=_refCount - In the implementation block
@property (nonatomic,readonly) id propertyList; 
-(void)setAsset:(BRAsset *)arg1 ;
-(unsigned long long)refCount;
-(BRAsset *)asset;
-(id)description;
-(void)setSlot:(NSNumber *)arg1 ;
-(id)propertyList;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)slot;
-(void)dealloc;
-(void)setRefCount:(unsigned long long)arg1 ;
-(BOOL)isProgrammed;
-(id)initWithSlotData:(id)arg1 ;
-(void)setIsProgrammed:(BOOL)arg1 ;
@end

