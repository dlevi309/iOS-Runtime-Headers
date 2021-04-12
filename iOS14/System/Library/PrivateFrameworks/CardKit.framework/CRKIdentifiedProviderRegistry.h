/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

