/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDConversationRemoteStorage <NSObject>
@required
-(id)storageName;
-(void)removeDictionaryForKey:(id)arg1;
-(void)setDictionary:(id)arg1 forKey:(id)arg2;
-(BOOL)isInitialized;
-(id)dictionaryRepresentation;
-(void)refresh;
-(id)dictionaryForKey:(id)arg1;
-(BOOL)synchronize;

@end

