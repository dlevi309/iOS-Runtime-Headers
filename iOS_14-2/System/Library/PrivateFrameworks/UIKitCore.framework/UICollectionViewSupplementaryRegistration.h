/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UINib;

@interface UICollectionViewSupplementaryRegistration : NSObject {

	NSString* _reuseIdentifier;
	Class _supplementaryClass;
	UINib* _supplementaryNib;
	NSString* _elementKind;
	/*^block*/id _configurationHandler;

}

@property (nonatomic,readonly) Class supplementaryClass;              //@synthesize supplementaryClass=_supplementaryClass - In the implementation block
@property (nonatomic,readonly) UINib * supplementaryNib;              //@synthesize supplementaryNib=_supplementaryNib - In the implementation block
@property (nonatomic,readonly) NSString * elementKind;                //@synthesize elementKind=_elementKind - In the implementation block
@property (nonatomic,readonly) id configurationHandler;               //@synthesize configurationHandler=_configurationHandler - In the implementation block
+(id)registrationWithSupplementaryClass:(Class)arg1 elementKind:(id)arg2 configurationHandler:(/*^block*/id)arg3 ;
+(id)registrationWithSupplementaryNib:(id)arg1 elementKind:(id)arg2 configurationHandler:(/*^block*/id)arg3 ;
-(id)initWithSupplementaryClass:(Class)arg1 supplementaryNib:(id)arg2 elementKind:(id)arg3 configurationHandler:(/*^block*/id)arg4 reuseIdentifier:(id)arg5 ;
-(NSString *)elementKind;
-(Class)supplementaryClass;
-(BOOL)hasSupplementaryNib;
-(UINib *)supplementaryNib;
-(id)configurationHandler;
-(BOOL)hasSupplementaryClass;
-(id)reuseIdentifier;
@end

