/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/VCSYChange.h>

@class NSString, NSArray;

@interface VCIntentDefinitionChange : NSObject <VCSYChange> {

	NSString* _objectIdentifier;
	long long _changeType;
	NSString* _checksum;
	NSArray* _files;

}

@property (nonatomic,copy) NSArray * files;                              //@synthesize files=_files - In the implementation block
@property (nonatomic,copy,readonly) NSString * checksum;                 //@synthesize checksum=_checksum - In the implementation block
@property (assign,nonatomic) long long changeType;                       //@synthesize changeType=_changeType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
+(int)messageType;
-(NSString *)description;
-(long long)changeType;
-(void)setChangeType:(long long)arg1 ;
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
-(NSString *)objectIdentifier;
-(NSString *)checksum;
-(NSString *)sequencer;
-(BOOL)writeTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)readFrom:(id)arg1 error:(id*)arg2 ;
-(id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2 ;
-(id)initWithApplicationProxy:(id)arg1 changeType:(long long)arg2 ;
@end

