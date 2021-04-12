/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long vendorId;                                   //@synthesize vendorId=_vendorId - In the implementation block
@property (nonatomic,readonly) long long productId;                                  //@synthesize productId=_productId - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomActions; 
@property (nonatomic,readonly) BOOL customActionsRequireAssistiveTouch; 
@property (nonatomic,readonly) NSArray * buttonsWithCustomActions; 
@property (nonatomic,retain) NSMutableDictionary * buttonMap;                        //@synthesize buttonMap=_buttonMap - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_newOrExistingMouseForIdentifier:(id)arg1 name:(id)arg2 vendorId:(id)arg3 productId:(id)arg4 ;
+(id)_existingMouseForIdentifier:(id)arg1 vendorId:(long long)arg2 productId:(long long)arg3 ;
+(id)serialize:(id)arg1 ;
+(id)mouseForHIDDevice:(IOHIDDeviceRef)arg1 ;
+(id)mouseForHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
+(id)deserialize:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(long long)vendorId;
-(NSString *)name;
-(id)description;
-(void)setButtonMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)buttonMap;
-(BOOL)isEqualToIdentifier:(id)arg1 vendorId:(long long)arg2 productId:(long long)arg3 ;
-(BOOL)isEqualToMouse:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 vendorId:(long long)arg3 productId:(long long)arg4 ;
-(void)setCustomAction:(id)arg1 forButtonNumber:(long long)arg2 ;
-(BOOL)hasCustomActions;
-(void)setDefaultActionForButtonNumber:(long long)arg1 ;
-(BOOL)customActionsRequireAssistiveTouch;
-(NSArray *)buttonsWithCustomActions;
-(id)customActionForButtonNumber:(long long)arg1 ;
-(long long)productId;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

