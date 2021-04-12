/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setAttributedName:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedName;
-(void)setItemSearchBlock:(id)arg1 ;
-(void)setSystemRotorType:(long long)arg1 ;
-(id)initWithName:(id)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(id)initWithAttributedName:(id)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(id)initWithSystemType:(long long)arg1 itemSearchBlock:(/*^block*/id)arg2 ;
-(id)targetElement;
-(void)setTargetElement:(id)arg1 ;
-(long long)systemRotorType;
-(id)itemSearchBlock;
@end

