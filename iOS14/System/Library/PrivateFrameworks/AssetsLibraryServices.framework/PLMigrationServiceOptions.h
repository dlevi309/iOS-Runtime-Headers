/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PLMigrationServiceOptions : NSObject <NSCopying, NSSecureCoding> {

	unsigned short _option;
	NSString* _clientBundleId;
	NSString* _suggestedDestinationName;

}

@property (readonly) NSString * clientBundleId;                    //@synthesize clientBundleId=_clientBundleId - In the implementation block
@property (copy) NSString * suggestedDestinationName;              //@synthesize suggestedDestinationName=_suggestedDestinationName - In the implementation block
@property (assign) unsigned short option;                          //@synthesize option=_option - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(unsigned short)option;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPMSOption:(unsigned short)arg1 ;
-(id)nameForOption:(unsigned short)arg1 ;
-(NSString *)suggestedDestinationName;
-(void)setSuggestedDestinationName:(NSString *)arg1 ;
-(id)description;
-(void)setOption:(unsigned short)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientBundleId;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

