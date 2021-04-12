/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSString;

@interface _TVRCMRCommandInfoWrapper : NSObject {

	MRMediaRemoteCommandInfoRef _info;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,copy,readonly) NSString * commandDescription; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
-(void)dealloc;
-(id)description;
-(BOOL)isEnabled;
-(unsigned)command;
-(NSString *)commandDescription;
-(id)initWithCommandInfo:(MRMediaRemoteCommandInfoRef)arg1 ;
@end

