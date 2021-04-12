/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PLMigrationServiceOptions : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _taskToInterrupt;
	unsigned short _option;
	NSString* _clientBundleId;
	NSString* _suggestedDestinationName;

}

@property (readonly) NSString * clientBundleId;                          //@synthesize clientBundleId=_clientBundleId - In the implementation block
@property (copy) NSString * suggestedDestinationName;                    //@synthesize suggestedDestinationName=_suggestedDestinationName - In the implementation block
@property (assign) unsigned short option;                                //@synthesize option=_option - In the implementation block
@property (assign,nonatomic) unsigned char taskToInterrupt;              //@synthesize taskToInterrupt=_taskToInterrupt - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)option;
-(NSString *)clientBundleId;
-(BOOL)isPMSOption:(unsigned short)arg1 ;
-(NSString *)suggestedDestinationName;
-(void)setSuggestedDestinationName:(NSString *)arg1 ;
-(void)setOption:(unsigned short)arg1 ;
-(unsigned char)taskToInterrupt;
-(void)setTaskToInterrupt:(unsigned char)arg1 ;
@end

