/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSString, NSSet, NSDictionary, NAFuture;

@interface _HFAppleMusicAccountArbitrationActionItem : NSObject {

	NSString* _actionItemDescription;
	NSSet* _accessories;
	NSDictionary* _userInfo;
	NAFuture* _future;

}

@property (nonatomic,retain) NSString * actionItemDescription;              //@synthesize actionItemDescription=_actionItemDescription - In the implementation block
@property (nonatomic,copy) NSSet * accessories;                             //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NAFuture * future;                             //@synthesize future=_future - In the implementation block
+(id)logoutActionItemForAccessories:(id)arg1 desiredAccount:(id)arg2 ;
+(id)loginActionItemForAccessories:(id)arg1 account:(id)arg2 contextGenerator:(/*^block*/id)arg3 ;
-(id)description;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSSet *)accessories;
-(NAFuture *)future;
-(void)setFuture:(NAFuture *)arg1 ;
-(void)setAccessories:(NSSet *)arg1 ;
-(void)setActionItemDescription:(NSString *)arg1 ;
-(NSString *)actionItemDescription;
@end

