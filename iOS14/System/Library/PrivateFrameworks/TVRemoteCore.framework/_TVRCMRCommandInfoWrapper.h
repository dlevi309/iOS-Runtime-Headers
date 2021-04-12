/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSString;

@interface _TVRCMRCommandInfoWrapper : NSObject {

	void* _info;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,copy,readonly) NSString * commandDescription; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
-(id)description;
-(BOOL)isEnabled;
-(unsigned)command;
-(void)dealloc;
-(NSString *)commandDescription;
-(id)initWithCommandInfo:(void*)arg1 ;
@end

