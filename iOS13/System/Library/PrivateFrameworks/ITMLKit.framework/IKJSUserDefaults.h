/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<IKAppUserDefaultsStoring>)userDefaultsStorage;
-(id)initWithAppContext:(id)arg1 userDefaultsStorage:(id)arg2 ;
-(id)getData:(id)arg1 ;
-(void)setData:(id)arg1 :(id)arg2 ;
-(void)setUserDefaultsStorage:(id<IKAppUserDefaultsStoring>)arg1 ;
@end

