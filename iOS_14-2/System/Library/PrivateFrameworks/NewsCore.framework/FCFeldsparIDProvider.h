/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>
#import <libobjc.A.dylib/FCFeldsparIDProvider.h>
@class NSString;


@protocol FCFeldsparIDProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * feldsparID; 
@required
-(void)addObserver:(id)arg1;
-(void)registerUserInfo:(id)arg1;
-(void)removeObserver:(id)arg1;
-(NSString *)feldsparID;

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
-(void)setUserInfo:(FCUserInfo *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)registerUserInfo:(id)arg1 ;
-(FCUserInfo *)userInfo;
-(NSHashTable *)observers;
-(id)init;
-(void)_updateFeldsparID:(id)arg1 ;
-(void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(BOOL)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(NSString *)feldsparID;
-(void)setFeldsparID:(NSString *)arg1 ;
@end

