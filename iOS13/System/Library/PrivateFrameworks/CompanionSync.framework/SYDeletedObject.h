/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/SYChange.h>

@class NSString;

@interface SYDeletedObject : NSObject <SYChange> {

	NSString* _sequencer;
	NSString* _syncId;

}

@property (nonatomic,retain) NSString * syncId;                          //@synthesize syncId=_syncId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer;                     //@synthesize sequencer=_sequencer - In the implementation block
@property (nonatomic,readonly) long long changeType; 
-(long long)changeType;
-(NSString *)objectIdentifier;
-(void)setSyncId:(NSString *)arg1 ;
-(NSString *)syncId;
-(NSString *)sequencer;
-(id)initWithSyncId:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 sequencer:(id)arg2 ;
@end

