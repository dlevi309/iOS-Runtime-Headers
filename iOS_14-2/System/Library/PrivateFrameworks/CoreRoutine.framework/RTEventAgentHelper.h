/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/


@class NSString;

@interface RTEventAgentHelper : NSObject {

	NSString* _restorationIdentifier;

}

@property (nonatomic,retain) NSString * restorationIdentifier;              //@synthesize restorationIdentifier=_restorationIdentifier - In the implementation block
+(BOOL)launchdManaged;
+(id)signingIdentifierFromSelf;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(id)initWithRestorationIdentifier:(id)arg1 ;
-(NSString *)restorationIdentifier;
@end

