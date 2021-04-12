/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

