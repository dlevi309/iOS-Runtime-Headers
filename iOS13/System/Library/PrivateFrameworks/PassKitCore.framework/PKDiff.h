/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSData;

@interface PKDiff : NSObject <NSSecureCoding> {

	NSMutableArray* _hunks;
	NSString* _passUniqueID;
	NSData* _passManifestHash;

}

@property (nonatomic,copy) NSString * passUniqueID;                //@synthesize passUniqueID=_passUniqueID - In the implementation block
@property (nonatomic,copy) NSData * passManifestHash;              //@synthesize passManifestHash=_passManifestHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)getHunkForKey:(id)arg1 oldValue:(id*)arg2 newValue:(id*)arg3 message:(id*)arg4 ;
-(void)removeHunkForKey:(id)arg1 ;
-(void)addHunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4 ;
-(void)enumerateHunks:(/*^block*/id)arg1 ;
-(unsigned long long)_hunkIndexForKey:(id)arg1 ;
-(BOOL)isEqualToDiff:(id)arg1 ;
-(long long)hunkCount;
-(void)key:(id*)arg1 oldValue:(id*)arg2 newValue:(id*)arg3 message:(id*)arg4 forHunkAtIndex:(long long)arg5 ;
-(void)addHunksFromDiff:(id)arg1 ;
-(id)anyKey;
-(NSString *)passUniqueID;
-(void)setPassUniqueID:(NSString *)arg1 ;
-(NSData *)passManifestHash;
-(void)setPassManifestHash:(NSData *)arg1 ;
@end

