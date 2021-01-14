/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <UserActivity/UserActivity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSFileHandle, NSArray, NSString, NSDictionary;

@interface UASharedPasteboardInfo : NSObject <NSSecureCoding, NSCopying> {

	NSFileHandle* _dataFile;
	long long _dataSize;
	NSArray* _items;
	NSString* _sharedDataPath;
	NSDictionary* _sandboxExtensions;

}

@property (retain) NSFileHandle * dataFile;                     //@synthesize dataFile=_dataFile - In the implementation block
@property (assign) long long dataSize;                          //@synthesize dataSize=_dataSize - In the implementation block
@property (copy) NSArray * items;                               //@synthesize items=_items - In the implementation block
@property (copy) NSString * sharedDataPath;                     //@synthesize sharedDataPath=_sharedDataPath - In the implementation block
@property (copy) NSDictionary * sandboxExtensions;              //@synthesize sandboxExtensions=_sandboxExtensions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setItems:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)items;
-(NSDictionary *)sandboxExtensions;
-(long long)dataSize;
-(id)description;
-(NSFileHandle *)dataFile;
-(void)setSandboxExtensions:(NSDictionary *)arg1 ;
-(void)setDataFile:(NSFileHandle *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSharedDataPath:(NSString *)arg1 ;
-(NSString *)sharedDataPath;
-(void)setDataSize:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

