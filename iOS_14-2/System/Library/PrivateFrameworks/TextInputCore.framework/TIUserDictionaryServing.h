/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

@class NSUUID;


@protocol TIUserDictionaryServing <NSObject>
@property (nonatomic,copy,readonly) NSUUID * userDictionaryUUID; 
@required
-(id)addObserver:(/*^block*/id)arg1;
-(void)getPhraseShortcutPairs:(/*^block*/id)arg1;
-(NSUUID *)userDictionaryUUID;
-(void)startServer;
-(void)removeObserver:(id)arg1;

@end

