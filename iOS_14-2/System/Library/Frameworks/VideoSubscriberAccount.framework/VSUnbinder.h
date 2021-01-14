/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSMapTable;

@interface VSUnbinder : NSObject {

	BOOL _invalid;
	NSMapTable* _bindingsByBinder;

}

@property (assign,getter=isInvalid,nonatomic) BOOL invalid;              //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,retain) NSMapTable * bindingsByBinder;              //@synthesize bindingsByBinder=_bindingsByBinder - In the implementation block
-(BOOL)isInvalid;
-(id)init;
-(void)setInvalid:(BOOL)arg1 ;
-(void)dealloc;
-(NSMapTable *)bindingsByBinder;
-(void)binder:(id)arg1 didEstablishBinding:(id)arg2 ;
-(void)binder:(id)arg1 didTearDownBinding:(id)arg2 ;
-(void)setBindingsByBinder:(NSMapTable *)arg1 ;
@end

