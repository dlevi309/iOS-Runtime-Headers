/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString, SBSRemoteAlertDefinition;

@interface SBWakeDestination : NSObject {

	unsigned long long _type;
	NSString* _identifier;
	SBSRemoteAlertDefinition* _remoteAlertDefinition;

}

@property (assign,nonatomic) unsigned long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertDefinition * remoteAlertDefinition;              //@synthesize remoteAlertDefinition=_remoteAlertDefinition - In the implementation block
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setRemoteAlertDefinition:(SBSRemoteAlertDefinition *)arg1 ;
-(SBSRemoteAlertDefinition *)remoteAlertDefinition;
@end

