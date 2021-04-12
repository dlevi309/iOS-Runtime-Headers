/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary, NSArray;

@interface AXCustomizableMouse : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _identifier;
	long long _vendorId;
	long long _productId;
	NSMutableDictionary* _buttonMap;

}

@property (nonatomic,retain) NSMutableDictionary * buttonMap;                        //@synthesize buttonMap=_buttonMap - In the implementation block
@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long vendorId;                                   //@synthesize vendorId=_vendorId - In the implementation block
@property (nonatomic,readonly) long long productId;                                  //@synthesize productId=_productId - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomActions; 
@property (nonatomic,readonly) BOOL customActionsRequireAssistiveTouch; 
@property (nonatomic,readonly) NSArray * buttonsWithCustomActions; 
+(BOOL)supportsSecureCoding;
+(id)_newOrExistingMouseForIdentifier:(id)arg1 name:(id)arg2 vendorId:(id)arg3 productId:(id)arg4 ;
+(id)_existingMouseForIdentifier:(id)arg1 vendorId:(long long)arg2 productId:(long long)arg3 ;
+(id)deserialize:(id)arg1 ;
+(id)serialize:(id)arg1 ;
+(id)mouseForHIDDevice:(IOHIDDeviceRef)arg1 ;
+(id)mouseForHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)vendorId;
-(void)setButtonMap:(NSMutableDictionary *)arg1 ;
-(long long)productId;
-(NSMutableDictionary *)buttonMap;
-(BOOL)isEqualToIdentifier:(id)arg1 vendorId:(long long)arg2 productId:(long long)arg3 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 vendorId:(long long)arg3 productId:(long long)arg4 ;
-(void)setCustomAction:(id)arg1 forButtonNumber:(long long)arg2 ;
-(BOOL)isEqualToMouse:(id)arg1 ;
-(void)setDefaultActionForButtonNumber:(long long)arg1 ;
-(BOOL)hasCustomActions;
-(BOOL)customActionsRequireAssistiveTouch;
-(NSArray *)buttonsWithCustomActions;
-(id)customActionForButtonNumber:(long long)arg1 ;
@end

