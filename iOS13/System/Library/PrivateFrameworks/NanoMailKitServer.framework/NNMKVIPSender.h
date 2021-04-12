/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSSet *)emailAddresses;
-(void)setEmailAddresses:(NSSet *)arg1 ;
@end

