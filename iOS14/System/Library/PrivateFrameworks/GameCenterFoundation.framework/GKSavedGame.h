/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSURL;

@interface GKSavedGame : NSObject <NSCopying> {

	NSString* _name;
	NSString* _deviceName;
	NSDate* _modificationDate;
	NSURL* _fileURL;

}

@property (retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (retain) NSString * deviceName;                  //@synthesize deviceName=_deviceName - In the implementation block
@property (retain) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (retain) NSURL * fileURL;                        //@synthesize fileURL=_fileURL - In the implementation block
-(NSDate *)modificationDate;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)deviceName;
-(NSString *)name;
-(NSURL *)fileURL;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)description;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

