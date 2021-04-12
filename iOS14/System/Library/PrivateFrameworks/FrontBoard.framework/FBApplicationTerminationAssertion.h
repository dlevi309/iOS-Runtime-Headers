/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)serialNumber;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setPlugInHoldToken:(id)arg1 ;
-(id)description;
-(NSString *)reason;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(id)plugInHoldToken;
-(void)setReason:(NSString *)arg1 ;
-(void)setSerialNumber:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

