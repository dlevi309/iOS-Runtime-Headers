/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFServiceLikeBuilder.h>

@protocol HFIconDescriptor;
@class NSString, HFRoomBuilder, HFNamingComponents, HMService, NSArray;

@interface HFServiceBuilder : HFItemBuilder <HFServiceLikeBuilder> {

	BOOL isFavorite;
	NSString* name;
	HFRoomBuilder* room;
	id<HFIconDescriptor> _iconDescriptor;
	NSString* _associatedServiceType;
	long long _configurationState;
	NSString* _accessoryName;
	HFNamingComponents* _namingComponent;

}

@property (nonatomic,retain) HFNamingComponents * namingComponent;              //@synthesize namingComponent=_namingComponent - In the implementation block
@property (nonatomic,readonly) HMService * service; 
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor;               //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
@property (nonatomic,copy) NSString * associatedServiceType;                    //@synthesize associatedServiceType=_associatedServiceType - In the implementation block
@property (assign,nonatomic) long long configurationState;                      //@synthesize configurationState=_configurationState - In the implementation block
@property (nonatomic,copy) NSString * accessoryName;                            //@synthesize accessoryName=_accessoryName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSString * originalName; 
@property (nonatomic,readonly) BOOL supportsFavoriting; 
@property (nonatomic,retain) HFRoomBuilder * room; 
@property (assign,nonatomic) BOOL isFavorite; 
@property (nonatomic,readonly) NSArray * availableIconDescriptors; 
+(Class)homeKitRepresentationClass;
-(NSString *)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)accessoryName;
-(HMService *)service;
-(NSString *)originalName;
-(BOOL)isFavorite;
-(void)setIsFavorite:(BOOL)arg1 ;
-(id)accessories;
-(HFRoomBuilder *)room;
-(long long)configurationState;
-(void)setRoom:(HFRoomBuilder *)arg1 ;
-(void)setAccessoryName:(NSString *)arg1 ;
-(NSString *)associatedServiceType;
-(void)setAssociatedServiceType:(NSString *)arg1 ;
-(void)setConfigurationState:(long long)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitItem;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)setNamingComponent:(HFNamingComponents *)arg1 ;
-(HFNamingComponents *)namingComponent;
-(id)_lazilyUpdateName;
-(id)_lazilyUpdateRoom;
-(id)_lazilyUpdateFavorite;
-(BOOL)_shouldUpdateNilNameWithRoomName;
-(id)removeItemFromHome;
-(BOOL)supportsFavoriting;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(NSArray *)availableIconDescriptors;
-(id)_lazilyUpdateIcon;
-(id)_lazilyUpdateDateAdded;
-(id)_lazilyUpdateAssociatedServiceType;
-(id)_lazilyUpdateConfigurationState;
@end

