/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIUserActionDialRequestOpener.h>

@class TUCallCenter, NSString;

@interface _CNUIUserActionDialRequestOpener : NSObject <CNUIUserActionDialRequestOpener> {

	TUCallCenter* _callCenter;

}

@property (nonatomic,readonly) TUCallCenter * callCenter;              //@synthesize callCenter=_callCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorForUnableToCastDialRequest:(id)arg1 ;
+(id)errorForUnableToOpenDialRequest:(id)arg1 withUnderlyingError:(id)arg2 ;
-(id)init;
-(TUCallCenter *)callCenter;
-(id)initWithCallCenter:(id)arg1 ;
-(id)openDialRequest:(id)arg1 withScheduler:(id)arg2 ;
@end

