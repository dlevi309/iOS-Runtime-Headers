/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSMapTable;

@interface VSUnbinder : NSObject {

	BOOL _invalid;
	NSMapTable* _bindingsByBinder;

}

@property (assign,getter=isInvalid,nonatomic) BOOL invalid;              //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,retain) NSMapTable * bindingsByBinder;              //@synthesize bindingsByBinder=_bindingsByBinder - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isInvalid;
-(void)setInvalid:(BOOL)arg1 ;
-(NSMapTable *)bindingsByBinder;
-(void)binder:(id)arg1 didEstablishBinding:(id)arg2 ;
-(void)binder:(id)arg1 didTearDownBinding:(id)arg2 ;
-(void)setBindingsByBinder:(NSMapTable *)arg1 ;
@end

