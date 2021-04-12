/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>
#import <libobjc.A.dylib/FCFeldsparIDProvider.h>
@class NSString;


@protocol FCFeldsparIDProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * feldsparID; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(NSString *)feldsparID;
-(void)registerUserInfo:(id)arg1;

@end


@class NSString, FCUserInfo, NSHashTable;

@interface FCFeldsparIDProvider : NSObject <FCUserInfoObserving, FCFeldsparIDProvider> {

	FCUserInfo* _userInfo;
	NSString* _feldsparID;
	NSHashTable* _observers;

}

@property (nonatomic,retain) FCUserInfo * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * feldsparID;                    //@synthesize feldsparID=_feldsparID - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(FCUserInfo *)userInfo;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setUserInfo:(FCUserInfo *)arg1 ;
-(NSHashTable *)observers;
-(void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(BOOL)arg2 ;
-(NSString *)feldsparID;
-(void)_updateFeldsparID:(id)arg1 ;
-(void)setFeldsparID:(NSString *)arg1 ;
-(void)registerUserInfo:(id)arg1 ;
@end

