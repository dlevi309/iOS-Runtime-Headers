/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
*/


#import <SMBClientEngine/SMBClientEngine-Structs.h>
@class NSString;

@interface SMBDirEntry : NSObject {

	unsigned _ntstatus;
	NSString* _name;
	smbfattr _attributes;

}

@property (assign) unsigned ntstatus;                //@synthesize ntstatus=_ntstatus - In the implementation block
@property (copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign) smbfattr attributes;              //@synthesize attributes=_attributes - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(smbfattr)attributes;
-(void)setAttributes:(smbfattr)arg1 ;
-(unsigned)ntstatus;
-(void)setNtstatus:(unsigned)arg1 ;
@end

