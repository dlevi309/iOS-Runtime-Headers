/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@protocol CNCancelable;
@class CNObservable, NSArray, CNUILikenessRenderingScope;

@interface CNUIRenderedLikenessCacheEntry : NSObject {

	id<CNCancelable> _token;
	CNObservable* _imageObservable;
	NSArray* _contacts;
	CNUILikenessRenderingScope* _scope;

}

@property (nonatomic,readonly) id<CNCancelable> token;                          //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) CNObservable * imageObservable;                  //@synthesize imageObservable=_imageObservable - In the implementation block
@property (nonatomic,readonly) NSArray * contacts;                              //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) CNUILikenessRenderingScope * scope;              //@synthesize scope=_scope - In the implementation block
+(id)entryWithObservable:(id)arg1 token:(id)arg2 contacts:(id)arg3 scope:(id)arg4 ;
-(NSArray *)contacts;
-(CNUILikenessRenderingScope *)scope;
-(id)initWithObservable:(id)arg1 token:(id)arg2 contacts:(id)arg3 scope:(id)arg4 ;
-(id)description;
-(CNObservable *)imageObservable;
-(id<CNCancelable>)token;
@end

