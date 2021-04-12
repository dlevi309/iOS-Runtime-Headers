/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@class NSString;

@interface FBApplicationTerminationAssertion : NSObject {

	NSString* _bundleID;
	NSString* _reason;
	unsigned long long _serialNumber;
	id _plugInHoldToken;

}

@property (nonatomic,copy) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) id plugInHoldToken;                           //@synthesize plugInHoldToken=_plugInHoldToken - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)reason;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned long long)serialNumber;
-(void)setReason:(NSString *)arg1 ;
-(void)setSerialNumber:(unsigned long long)arg1 ;
-(id)plugInHoldToken;
-(void)setPlugInHoldToken:(id)arg1 ;
@end

