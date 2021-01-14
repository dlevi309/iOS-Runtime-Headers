/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

