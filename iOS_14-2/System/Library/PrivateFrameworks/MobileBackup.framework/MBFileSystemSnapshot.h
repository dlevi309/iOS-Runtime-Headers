/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


@class NSString, NSDate;

@interface MBFileSystemSnapshot : NSObject {

	NSString* _name;
	NSString* _uuid;
	NSDate* _creationDate;

}

@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * uuid;                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
-(NSString *)uuid;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)name;
-(id)description;
-(NSDate *)creationDate;
-(void)setName:(NSString *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 creationDate:(id)arg3 ;
@end

