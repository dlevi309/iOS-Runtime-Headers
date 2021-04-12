/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSString;

@interface HFNamingComponents : NSObject {

	BOOL _isAccessory;
	BOOL _isDiscoveredAccessory;
	BOOL _isService;
	BOOL _isChildService;
	BOOL _isServiceGroup;
	BOOL _isMediaContainer;
	BOOL _isTelevision;
	BOOL _allowsEmptyNameTextField;
	BOOL _allowsNullResettableName;
	id _homeKitObject;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isAccessory;                               //@synthesize isAccessory=_isAccessory - In the implementation block
@property (assign,nonatomic) BOOL isDiscoveredAccessory;                     //@synthesize isDiscoveredAccessory=_isDiscoveredAccessory - In the implementation block
@property (assign,nonatomic) BOOL isService;                                 //@synthesize isService=_isService - In the implementation block
@property (assign,nonatomic) BOOL isChildService;                            //@synthesize isChildService=_isChildService - In the implementation block
@property (assign,nonatomic) BOOL isServiceGroup;                            //@synthesize isServiceGroup=_isServiceGroup - In the implementation block
@property (assign,nonatomic) BOOL isMediaContainer;                          //@synthesize isMediaContainer=_isMediaContainer - In the implementation block
@property (assign,nonatomic) BOOL isTelevision;                              //@synthesize isTelevision=_isTelevision - In the implementation block
@property (assign,nonatomic) BOOL allowsEmptyNameTextField;                  //@synthesize allowsEmptyNameTextField=_allowsEmptyNameTextField - In the implementation block
@property (assign,nonatomic) BOOL allowsNullResettableName;                  //@synthesize allowsNullResettableName=_allowsNullResettableName - In the implementation block
@property (nonatomic,readonly) id homeKitObject;                             //@synthesize homeKitObject=_homeKitObject - In the implementation block
@property (nonatomic,readonly) NSString * placeholderText; 
@property (nonatomic,readonly) NSString * textFieldDisplayText; 
@property (nonatomic,readonly) NSString * defaultName; 
+(id)namingComponentFromAccessory:(id)arg1 ;
+(id)namingComponentFromService:(id)arg1 ;
+(id)namingComponentFromMediaSystem:(id)arg1 ;
+(id)namingComponentFromHomeKitObject:(id)arg1 ;
+(id)namingComponentFromServiceGroup:(id)arg1 ;
+(id)namingComponentFromDiscoveredAccessory:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)defaultName;
-(id)categoryName;
-(id)roomName;
-(BOOL)isMediaContainer;
-(void)setIsMediaContainer:(BOOL)arg1 ;
-(NSString *)placeholderText;
-(BOOL)isAccessory;
-(id)configuredName;
-(id)homeKitObject;
-(id)commitableNameForString:(id)arg1 ;
-(id)initWithHomeKitObject:(id)arg1 ;
-(void)setIsService:(BOOL)arg1 ;
-(void)setIsChildService:(BOOL)arg1 ;
-(void)setAllowsNullResettableName:(BOOL)arg1 ;
-(void)setIsTelevision:(BOOL)arg1 ;
-(void)setAllowsEmptyNameTextField:(BOOL)arg1 ;
-(void)setIsServiceGroup:(BOOL)arg1 ;
-(void)setIsAccessory:(BOOL)arg1 ;
-(void)setIsDiscoveredAccessory:(BOOL)arg1 ;
-(NSString *)textFieldDisplayText;
-(BOOL)isTelevision;
-(BOOL)allowsEmptyNameTextField;
-(BOOL)isChildService;
-(BOOL)allowsNullResettableName;
-(id)homeKitSafeStringForString:(id)arg1 ;
-(BOOL)isService;
-(BOOL)isDiscoveredAccessory;
-(BOOL)isServiceGroup;
@end

