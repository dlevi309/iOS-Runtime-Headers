/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SPUIRemoteSearchViewDelegate.h>

@class NSMutableDictionary, NSString;

@interface SBSpotlightDelegateManager : NSObject <SPUIRemoteSearchViewDelegate> {

	NSMutableDictionary* _delegatesForLevel;

}

@property (nonatomic,retain) NSMutableDictionary * delegatesForLevel;              //@synthesize delegatesForLevel=_delegatesForLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setDelegatesForLevel:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)delegatesForLevel;
-(void)removeSpotlightDelegate:(id)arg1 forLevel:(unsigned long long)arg2 ;
-(void)dismissSearchView;
-(void)_modifyDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)addSpotlightDelegate:(id)arg1 forLevel:(unsigned long long)arg2 ;
-(id)activeDelegate;
@end

