/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSString;

@interface IDSMessageToDelete : NSObject {

	unsigned _dataProtectionClass;
	NSString* _guid;
	NSString* _alternateGUID;

}

@property (assign) unsigned dataProtectionClass;                                   //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (setter=setGUID:,retain) NSString * guid;                                //@synthesize guid=_guid - In the implementation block
@property (setter=setAlternateGUID:,retain) NSString * alternateGUID;              //@synthesize alternateGUID=_alternateGUID - In the implementation block
-(NSString *)guid;
-(NSString *)alternateGUID;
-(void)setAlternateGUID:(NSString *)arg1 ;
-(unsigned)dataProtectionClass;
-(void)setDataProtectionClass:(unsigned)arg1 ;
-(void)setGUID:(id)arg1 ;
@end

