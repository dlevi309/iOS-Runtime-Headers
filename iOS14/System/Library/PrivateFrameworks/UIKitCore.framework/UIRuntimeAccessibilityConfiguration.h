/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSNumber, NSObject;

@interface UIRuntimeAccessibilityConfiguration : NSObject {

	NSString* accessibilityConfigurationHint;
	NSString* accessibilityConfigurationIdentifier;
	NSString* accessibilityConfigurationLabel;
	NSNumber* accessibilityConfigurationTraits;
	NSNumber* isAccessibilityConfigurationElement;
	NSObject* object;

}

@property (nonatomic,retain) NSString * accessibilityConfigurationHint; 
@property (nonatomic,retain) NSString * accessibilityConfigurationIdentifier; 
@property (nonatomic,retain) NSString * accessibilityConfigurationLabel; 
@property (nonatomic,retain) NSNumber * accessibilityConfigurationTraits; 
@property (nonatomic,retain) NSNumber * isAccessibilityConfigurationElement; 
@property (nonatomic,retain) NSObject * object; 
-(id)initWithObject:(id)arg1 label:(id)arg2 identifier:(id)arg3 hint:(id)arg4 traits:(id)arg5 andIsAccessibilityElement:(id)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject *)object;
-(void)setObject:(NSObject *)arg1 ;
-(void)applyConfiguration;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithObject:(id)arg1 label:(id)arg2 hint:(id)arg3 traits:(id)arg4 andIsAccessibilityElement:(id)arg5 ;
-(NSString *)accessibilityConfigurationHint;
-(void)setAccessibilityConfigurationHint:(NSString *)arg1 ;
-(NSString *)accessibilityConfigurationIdentifier;
-(void)setAccessibilityConfigurationIdentifier:(NSString *)arg1 ;
-(NSString *)accessibilityConfigurationLabel;
-(void)setAccessibilityConfigurationLabel:(NSString *)arg1 ;
-(NSNumber *)accessibilityConfigurationTraits;
-(void)setAccessibilityConfigurationTraits:(NSNumber *)arg1 ;
-(NSNumber *)isAccessibilityConfigurationElement;
-(void)setIsAccessibilityConfigurationElement:(NSNumber *)arg1 ;
@end

