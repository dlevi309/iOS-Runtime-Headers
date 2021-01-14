/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSString * objectIdentifier;              //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sequencer; 
+(int)messageType;
-(void)setChangeType:(long long)arg1 ;
-(long long)changeType;
-(NSArray *)files;
-(NSString *)description;
-(NSString *)sequencer;
-(NSString *)objectIdentifier;
-(NSString *)checksum;
-(void)setFiles:(NSArray *)arg1 ;
-(BOOL)writeTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)readFrom:(id)arg1 error:(id*)arg2 ;
-(id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2 ;
-(id)initWithApplicationRecord:(id)arg1 changeType:(long long)arg2 ;
@end

