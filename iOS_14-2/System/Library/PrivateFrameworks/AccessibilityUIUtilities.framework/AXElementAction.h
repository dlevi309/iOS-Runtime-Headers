/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/


#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
@class NSString, AXElement;

@interface AXElementAction : NSObject {

	NSString* _name;
	long long _type;
	AXElement* _element;
	NSString* _customActionIdentifier;
	id _dragActivationToken;
	unsigned long long _medusaGesture;
	CGPoint _dropPoint;

}

@property (nonatomic,retain) AXElement * element;                            //@synthesize element=_element - In the implementation block
@property (nonatomic,retain) NSString * customActionIdentifier;              //@synthesize customActionIdentifier=_customActionIdentifier - In the implementation block
@property (nonatomic,retain) id dragActivationToken;                         //@synthesize dragActivationToken=_dragActivationToken - In the implementation block
@property (assign,nonatomic) CGPoint dropPoint;                              //@synthesize dropPoint=_dropPoint - In the implementation block
@property (assign,nonatomic) unsigned long long medusaGesture;               //@synthesize medusaGesture=_medusaGesture - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
-(AXElement *)element;
-(NSString *)customActionIdentifier;
-(void)setCustomActionIdentifier:(NSString *)arg1 ;
-(id)dragActivationToken;
-(void)setDragActivationToken:(id)arg1 ;
-(unsigned long long)medusaGesture;
-(void)setMedusaGesture:(unsigned long long)arg1 ;
-(void)setElement:(AXElement *)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)name;
-(long long)type;
-(void)setDropPoint:(CGPoint)arg1 ;
-(CGPoint)dropPoint;
-(void)setName:(NSString *)arg1 ;
@end

