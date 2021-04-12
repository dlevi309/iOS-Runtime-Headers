/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)dataProtectionClass;
-(void)setGUID:(id)arg1 ;
-(void)setDataProtectionClass:(unsigned)arg1 ;
-(NSString *)alternateGUID;
-(void)setAlternateGUID:(NSString *)arg1 ;
@end

