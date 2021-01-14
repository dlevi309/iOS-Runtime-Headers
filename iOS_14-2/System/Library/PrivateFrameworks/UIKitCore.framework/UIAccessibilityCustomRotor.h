/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSUUID, NSAttributedString, NSString;

@interface UIAccessibilityCustomRotor : NSObject {

	NSUUID* uuid;
	id targetElement;
	long long systemRotorType;
	NSAttributedString* _attributedName;
	/*^block*/id _itemSearchBlock;

}

@property (nonatomic,retain) NSUUID * uuid; 
@property (assign,nonatomic,__weak) id targetElement; 
@property (assign,nonatomic) long long systemRotorType; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSAttributedString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
@property (nonatomic,copy) id itemSearchBlock;                               //@synthesize itemSearchBlock=_itemSearchBlock - In the implementation block
-(NSUUID *)uuid;
-(id)initWithAttributedName:(id)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(id)initWithSystemType:(long long)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(id)targetElement;
-(long long)systemRotorType;
-(id)itemSearchBlock;
-(NSAttributedString *)attributedName;
-(void)setTargetElement:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setItemSearchBlock:(id)arg1 ;
-(void)setSystemRotorType:(long long)arg1 ;
-(void)setAttributedName:(NSAttributedString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
@end

