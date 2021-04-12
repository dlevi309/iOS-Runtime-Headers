/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NSString, NSSet;

@interface NNMKVIPSender : NSObject {

	NSString* _name;
	NSString* _displayName;
	NSSet* _emailAddresses;

}

@property (nonatomic,copy) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSSet * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
-(void)setEmailAddresses:(NSSet *)arg1 ;
-(NSSet *)emailAddresses;
-(NSString *)name;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)displayName;
@end

