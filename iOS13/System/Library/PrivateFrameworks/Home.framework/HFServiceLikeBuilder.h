/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

@class NSString, HFRoomBuilder, NSArray;


@protocol HFServiceLikeBuilder <HFAccessoryVendor,NSObject>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSString * originalName; 
@property (nonatomic,readonly) BOOL supportsFavoriting; 
@property (nonatomic,retain) HFRoomBuilder * room; 
@property (assign,nonatomic) BOOL isFavorite; 
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor; 
@property (nonatomic,readonly) NSArray * availableIconDescriptors; 
@optional
-(BOOL)isFavorite;
-(void)setIsFavorite:(BOOL)arg1;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)setIconDescriptor:(id)arg1;
-(NSArray *)availableIconDescriptors;

@required
-(NSString *)name;
-(void)setName:(id)arg1;
-(NSString *)originalName;
-(HFRoomBuilder *)room;
-(void)setRoom:(id)arg1;
-(id)removeItemFromHome;
-(BOOL)supportsFavoriting;

@end

