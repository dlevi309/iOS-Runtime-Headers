/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setRemoteAlertDefinition:(SBSRemoteAlertDefinition *)arg1 ;
-(SBSRemoteAlertDefinition *)remoteAlertDefinition;
@end

