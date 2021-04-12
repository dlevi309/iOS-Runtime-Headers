/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

@class NSString;


@protocol VCSYChange <VCPBCodable,VCPBMessageTyped,SYChange>
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) long long changeType; 
@required
-(long long)changeType;
-(NSString *)objectIdentifier;
-(id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2;

@end

