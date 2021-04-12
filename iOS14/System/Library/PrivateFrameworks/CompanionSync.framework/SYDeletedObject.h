/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/SYChange.h>

@class NSString;

@interface SYDeletedObject : NSObject <SYChange> {

	NSString* _sequencer;
	NSString* _syncId;

}

@property (nonatomic,retain) NSString * syncId;                          //@synthesize syncId=_syncId - In the implementation block
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer;                     //@synthesize sequencer=_sequencer - In the implementation block
@property (nonatomic,readonly) long long changeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)changeType;
-(NSString *)syncId;
-(NSString *)sequencer;
-(NSString *)objectIdentifier;
-(void)setSyncId:(NSString *)arg1 ;
-(id)initWithSyncId:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 sequencer:(id)arg2 ;
@end

