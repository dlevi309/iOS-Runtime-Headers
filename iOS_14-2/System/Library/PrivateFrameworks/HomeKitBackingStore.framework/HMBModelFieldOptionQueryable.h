/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HMBModelFieldOption.h>

@interface HMBModelFieldOptionQueryable : HMBModelFieldOption {

	/*^block*/id _encodingBlock;
	/*^block*/id _decodingBlock;
	/*^block*/id _descriptionBlock;

}

@property (nonatomic,copy) id encodingBlock;                 //@synthesize encodingBlock=_encodingBlock - In the implementation block
@property (nonatomic,copy) id decodingBlock;                 //@synthesize decodingBlock=_decodingBlock - In the implementation block
@property (nonatomic,copy) id descriptionBlock;              //@synthesize descriptionBlock=_descriptionBlock - In the implementation block
-(id)decodingBlock;
-(id)initWithEncodingBlock:(/*^block*/id)arg1 decodingBlock:(/*^block*/id)arg2 descriptionBlock:(/*^block*/id)arg3 ;
-(id)encodingBlock;
-(void)setEncodingBlock:(id)arg1 ;
-(void)setDescriptionBlock:(id)arg1 ;
-(id)descriptionBlock;
-(void)setDecodingBlock:(id)arg1 ;
-(void)applyTo:(id)arg1 ;
@end

