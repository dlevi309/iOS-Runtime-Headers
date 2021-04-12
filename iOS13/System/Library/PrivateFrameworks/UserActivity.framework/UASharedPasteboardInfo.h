/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setDataSize:(long long)arg1 ;
-(long long)dataSize;
-(NSDictionary *)sandboxExtensions;
-(void)setSandboxExtensions:(NSDictionary *)arg1 ;
-(void)setDataFile:(NSFileHandle *)arg1 ;
-(NSFileHandle *)dataFile;
-(void)setSharedDataPath:(NSString *)arg1 ;
-(NSString *)sharedDataPath;
@end

