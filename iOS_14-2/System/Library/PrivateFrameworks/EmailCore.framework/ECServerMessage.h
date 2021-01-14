/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/EmailCore-Structs.h>
#import <libobjc.A.dylib/ECServerMessageBuilder.h>
#import <libobjc.A.dylib/ECIMAPServerMessageBuilder.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSNumber, ECMessageFlags;

@interface ECServerMessage : NSObject <ECServerMessageBuilder, ECIMAPServerMessageBuilder, NSCopying> {

	NSNumber* _imapUID;
	NSString* _persistentID;
	NSString* _messagePersistentID;
	ECMessageFlags* _serverFlags;
	NSString* _remoteID;
	NSSet* _labels;

}

@property (nonatomic,retain) NSString * persistentID;                     //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,retain) NSString * messagePersistentID;              //@synthesize messagePersistentID=_messagePersistentID - In the implementation block
@property (nonatomic,retain) ECMessageFlags * serverFlags;                //@synthesize serverFlags=_serverFlags - In the implementation block
@property (nonatomic,copy) NSString * remoteID;                           //@synthesize remoteID=_remoteID - In the implementation block
@property (nonatomic,copy) NSSet * labels;                                //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) id remoteIDObject; 
@property (nonatomic,readonly) unsigned imapUID; 
-(void)setLabels:(NSSet *)arg1 ;
-(void)setPersistentID:(NSString *)arg1 ;
-(id)init;
-(NSSet *)labels;
-(NSString *)persistentID;
-(unsigned)imapUID;
-(unsigned long long)hash;
-(NSString *)remoteID;
-(void)setMessagePersistentID:(NSString *)arg1 ;
-(id)initWithServerMessageBuilder:(/*^block*/id)arg1 ;
-(ECMessageFlags *)serverFlags;
-(void)setRemoteID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)messagePersistentID;
-(void)setServerFlags:(ECMessageFlags *)arg1 ;
-(void)setImapUID:(unsigned)arg1 ;
-(id)initWithIMAPServerMessageBuilder:(/*^block*/id)arg1 ;
-(id)remoteIDObject;
@end

