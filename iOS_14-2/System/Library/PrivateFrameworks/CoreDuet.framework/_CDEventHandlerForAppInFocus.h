/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDEventHandlerDelegate.h>

@class _CDDataCollectionAnonymizer, _CDFileUtility, NSString;

@interface _CDEventHandlerForAppInFocus : NSObject <_CDEventHandlerDelegate> {

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
-(_CDFileUtility *)utility;
-(void)setUtility:(_CDFileUtility *)arg1 ;
-(_CDDataCollectionAnonymizer *)anonymizer;
-(void)eventHandler:(id)arg1 withFileHandle:(id)arg2 ;
-(void)setAnonymizer:(_CDDataCollectionAnonymizer *)arg1 ;
@end

