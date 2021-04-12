/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSSet;

@interface TUContactsDataProviderIgnoredHandles : NSObject {

	NSSet* _handlesToIgnore;

}

@property (nonatomic,copy,readonly) NSSet * handlesToIgnore;              //@synthesize handlesToIgnore=_handlesToIgnore - In the implementation block
-(id)init;
-(BOOL)contains:(id)arg1 ;
-(void)loadHandles;
-(NSSet *)handlesToIgnore;
@end

