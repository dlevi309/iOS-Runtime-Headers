/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/

@class NSSet, NSString;


@protocol ACDPluginEntryProtocol
@property (nonatomic,readonly) NSSet * supportedAccountTypes; 
@property (nonatomic,readonly) NSSet * supportedDataclasses; 
@property (nonatomic,readonly) id principalObject; 
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(NSSet *)supportedDataclasses;
-(id)principalObject;
-(BOOL)principalObjectRespondsToSelector:(SEL)arg1;
-(NSSet *)supportedAccountTypes;

@end

