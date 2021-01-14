/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSUserDefaults.h>

@protocol IKJSUserDefaults <JSExport>
@required
-(void)removeData:(id)arg1;
-(id)getData:(id)arg1;
-(void)setData:(id)arg1 :(id)arg2;

@end


@protocol IKAppUserDefaultsStoring;
@interface IKJSUserDefaults : IKJSObject <IKJSUserDefaults> {

	id<IKAppUserDefaultsStoring> _userDefaultsStorage;

}

@property (assign,nonatomic,__weak) id<IKAppUserDefaultsStoring> userDefaultsStorage;              //@synthesize userDefaultsStorage=_userDefaultsStorage - In the implementation block
-(void)removeData:(id)arg1 ;
-(id)getData:(id)arg1 ;
-(id<IKAppUserDefaultsStoring>)userDefaultsStorage;
-(void)setUserDefaultsStorage:(id<IKAppUserDefaultsStoring>)arg1 ;
-(id)initWithAppContext:(id)arg1 userDefaultsStorage:(id)arg2 ;
-(void)setData:(id)arg1 :(id)arg2 ;
@end

