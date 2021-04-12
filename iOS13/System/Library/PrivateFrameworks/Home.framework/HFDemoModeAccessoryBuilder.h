/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFServiceLikeBuilder.h>

@class NSString, HFRoomBuilder, HFNamingComponents, HMAccessory, NSArray;

@interface HFDemoModeAccessoryBuilder : HFItemBuilder <HFServiceLikeBuilder> {

	BOOL isFavorite;
	NSString* name;
	HFRoomBuilder* room;
	HFNamingComponents* _namingComponent;

}

@property (nonatomic,retain) HFNamingComponents * namingComponent;              //@synthesize namingComponent=_namingComponent - In the implementation block
@property (nonatomic,readonly) HMAccessory * accessory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSString * originalName; 
@property (nonatomic,readonly) BOOL supportsFavoriting; 
@property (nonatomic,retain) HFRoomBuilder * room; 
@property (assign,nonatomic) BOOL isFavorite; 
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor; 
@property (nonatomic,readonly) NSArray * availableIconDescriptors; 
+(Class)homeKitRepresentationClass;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)originalName;
-(BOOL)isFavorite;
-(void)setIsFavorite:(BOOL)arg1 ;
-(HMAccessory *)accessory;
-(id)accessories;
-(HFRoomBuilder *)room;
-(void)setRoom:(HFRoomBuilder *)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitItem;
-(void)setNamingComponent:(HFNamingComponents *)arg1 ;
-(HFNamingComponents *)namingComponent;
-(id)_lazilyUpdateName;
-(id)_lazilyUpdateRoom;
-(id)_lazilyUpdateFavorite;
-(id)removeItemFromHome;
-(BOOL)supportsFavoriting;
@end

