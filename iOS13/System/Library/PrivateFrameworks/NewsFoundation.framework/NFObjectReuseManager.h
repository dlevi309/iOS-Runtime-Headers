/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NSMutableDictionary;

@interface NFObjectReuseManager : NSObject {

	/*^block*/id _reuseFactory;
	NSMutableDictionary* _inuseObjects;
	NSMutableDictionary* _reuseableObjects;

}

@property (nonatomic,copy) id reuseFactory;                                     //@synthesize reuseFactory=_reuseFactory - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * inuseObjects;                  //@synthesize inuseObjects=_inuseObjects - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * reuseableObjects;              //@synthesize reuseableObjects=_reuseableObjects - In the implementation block
-(NSMutableDictionary *)reuseableObjects;
-(id)reuseFactory;
-(NSMutableDictionary *)inuseObjects;
-(id)initWithObjectConstructor:(/*^block*/id)arg1 ;
-(id)dequeueObjectForIdentifier:(id)arg1 ;
-(void)prepareObjectForReuse:(id)arg1 ;
-(void)purgeObjectForIdentifier:(id)arg1 ;
-(BOOL)isInUse:(id)arg1 ;
-(id)inUseObjectForIdentifier:(id)arg1 ;
-(void)setReuseFactory:(id)arg1 ;
-(void)setInuseObjects:(NSMutableDictionary *)arg1 ;
-(void)setReuseableObjects:(NSMutableDictionary *)arg1 ;
@end

