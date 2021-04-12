/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>

@class NSString;

@interface CNTUCallProviderManagerDelegate : NSObject <TUCallProviderManagerDelegate> {

	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) id block;                       //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)providersChangedForProviderManager:(id)arg1 ;
@end

