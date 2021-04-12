/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
*/


#import <SMBClientEngine/SMBClientEngine-Structs.h>
@class NSString;

@interface SMBFileAllInformation : NSObject {

	NSString* _name;
	smbfattr _attributes;

}

@property (assign) smbfattr attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (copy) NSString * name;                    //@synthesize name=_name - In the implementation block
-(void)setAttributes:(smbfattr)arg1 ;
-(NSString *)name;
-(smbfattr)attributes;
-(void)setName:(NSString *)arg1 ;
@end

