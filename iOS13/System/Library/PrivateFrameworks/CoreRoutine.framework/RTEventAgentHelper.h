/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/


@class NSString;

@interface RTEventAgentHelper : NSObject {

	NSString* _restorationIdentifier;

}

@property (nonatomic,retain) NSString * restorationIdentifier;              //@synthesize restorationIdentifier=_restorationIdentifier - In the implementation block
+(BOOL)launchdManaged;
+(id)signingIdentifierFromSelf;
-(NSString *)restorationIdentifier;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(id)initWithRestorationIdentifier:(id)arg1 ;
@end

