/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSString, NSUUID, NSArray;

@interface AXSwitchRecipe : NSObject {

	NSString* _name;
	NSUUID* _uuid;
	NSArray* _mappings;
	double _timeout;
	NSString* _unlocalizedName;
	NSString* _menuIconIdentifier;

}

@property (nonatomic,retain) NSUUID * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSArray * mappings;                         //@synthesize mappings=_mappings - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * unlocalizedName;                 //@synthesize unlocalizedName=_unlocalizedName - In the implementation block
@property (nonatomic,readonly) BOOL shouldContinueScanning; 
@property (nonatomic,copy) NSString * menuIconIdentifier;                //@synthesize menuIconIdentifier=_menuIconIdentifier - In the implementation block
+(id)recipeWithDictionaryRepresentation:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(NSString *)unlocalizedName;
-(void)setUnlocalizedName:(NSString *)arg1 ;
-(NSArray *)mappings;
-(void)setMappings:(NSArray *)arg1 ;
-(void)setMenuIconIdentifier:(NSString *)arg1 ;
-(NSString *)menuIconIdentifier;
-(BOOL)shouldContinueScanning;
@end

