/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/

@class NSSet, NSString;


@protocol ACDPluginEntryProtocol
@property (nonatomic,readonly) NSSet * supportedAccountTypes; 
@property (nonatomic,readonly) NSSet * supportedDataclasses; 
@property (nonatomic,readonly) id principalObject; 
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSSet *)supportedDataclasses;
-(id)principalObject;
-(NSString *)identifier;
-(BOOL)principalObjectRespondsToSelector:(SEL)arg1;
-(NSSet *)supportedAccountTypes;

@end

