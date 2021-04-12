/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDEventHandlerDelegate.h>

@class _CDDataCollectionAnonymizer, _CDFileUtility, NSString;

@interface _CDEventHandlerForDefaultPairedNearby : NSObject <_CDEventHandlerDelegate> {

	_CDDataCollectionAnonymizer* _anonymizer;
	_CDFileUtility* _utility;

}

@property (nonatomic,retain) _CDDataCollectionAnonymizer * anonymizer;              //@synthesize anonymizer=_anonymizer - In the implementation block
@property (nonatomic,retain) _CDFileUtility * utility;                              //@synthesize utility=_utility - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(_CDDataCollectionAnonymizer *)anonymizer;
-(_CDFileUtility *)utility;
-(void)eventHandler:(id)arg1 withFileHandle:(id)arg2 ;
-(void)setAnonymizer:(_CDDataCollectionAnonymizer *)arg1 ;
-(void)setUtility:(_CDFileUtility *)arg1 ;
@end

