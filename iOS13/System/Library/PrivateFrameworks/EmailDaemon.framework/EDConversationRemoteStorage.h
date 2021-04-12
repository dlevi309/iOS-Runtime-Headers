/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDConversationRemoteStorage <NSObject>
@required
-(BOOL)synchronize;
-(id)dictionaryRepresentation;
-(id)dictionaryForKey:(id)arg1;
-(void)setDictionary:(id)arg1 forKey:(id)arg2;
-(void)refresh;
-(BOOL)isInitialized;
-(void)removeDictionaryForKey:(id)arg1;
-(id)storageName;

@end

