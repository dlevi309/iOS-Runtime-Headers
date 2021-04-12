/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/


@class NSMutableOrderedSet, NSArray;

@interface CRKIdentifiedProviderRegistry : NSObject {

	NSMutableOrderedSet* _identifiedProviders;

}

@property (nonatomic,readonly) NSArray * identifiedProviders; 
+(id)sharedInstance;
-(id)init;
-(void)registerIdentifiedProvider:(id)arg1 ;
-(void)unregisterIdentifiedProvider:(id)arg1 ;
-(NSArray *)identifiedProviders;
@end

