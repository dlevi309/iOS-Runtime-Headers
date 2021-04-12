/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HMSymptomFixSessionDelegate.h>

@class NSMutableSet, NSString;

@interface HFSymptomFixManager : NSObject <HMSymptomFixSessionDelegate> {

	NSMutableSet* _items;

}

@property (nonatomic,readonly) NSMutableSet * items;                //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(NSMutableSet *)items;
-(void)fixSession:(id)arg1 didChangeState:(long long)arg2 ;
-(BOOL)anySymptomIsBeingFixedForFixableObject:(id)arg1 ;
-(id)_itemForSymptom:(id)arg1 accessory:(id)arg2 ;
-(id)_itemForFixSession:(id)arg1 ;
-(long long)fixStateForSymptom:(id)arg1 accessory:(id)arg2 ;
-(void)fixSymptom:(id)arg1 forFixableObject:(id)arg2 presentingViewController:(id)arg3 ;
@end

