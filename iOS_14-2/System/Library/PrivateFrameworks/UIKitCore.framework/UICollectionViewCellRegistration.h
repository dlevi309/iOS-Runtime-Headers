/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UINib;

@interface UICollectionViewCellRegistration : NSObject {

	NSString* _reuseIdentifier;
	Class _cellClass;
	UINib* _cellNib;
	/*^block*/id _configurationHandler;

}

@property (nonatomic,readonly) Class cellClass;                      //@synthesize cellClass=_cellClass - In the implementation block
@property (nonatomic,readonly) UINib * cellNib;                      //@synthesize cellNib=_cellNib - In the implementation block
@property (nonatomic,readonly) id configurationHandler;              //@synthesize configurationHandler=_configurationHandler - In the implementation block
+(id)registrationWithCellClass:(Class)arg1 configurationHandler:(/*^block*/id)arg2 ;
+(id)registrationWithCellNib:(id)arg1 configurationHandler:(/*^block*/id)arg2 ;
-(UINib *)cellNib;
-(id)initWithCellClass:(Class)arg1 cellNib:(id)arg2 configurationHandler:(/*^block*/id)arg3 reuseIdentifier:(id)arg4 ;
-(Class)cellClass;
-(BOOL)hasCellNib;
-(BOOL)hasCellClass;
-(id)configurationHandler;
-(id)reuseIdentifier;
@end

