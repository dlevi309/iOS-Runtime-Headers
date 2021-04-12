/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <Foundation/NSCoder.h>

@class MSVSegmentedCodingPackage, NSArray, NSDictionary;

@interface MSVSegmentedDecoder : NSCoder {

	MSVSegmentedCodingPackage* _package;
	Class _rootClass;
	NSArray* _subcoders;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain) MSVSegmentedCodingPackage * package;              //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) Class rootClass;                                  //@synthesize rootClass=_rootClass - In the implementation block
@property (nonatomic,retain) NSArray * subcoders;                              //@synthesize subcoders=_subcoders - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                            //@synthesize userInfo=_userInfo - In the implementation block
+(id)decodedObjectOfClass:(Class)arg1 fromPackage:(id)arg2 userInfo:(id)arg3 error:(id*)arg4 ;
+(id)decodedObjectOfClasses:(id)arg1 fromPackage:(id)arg2 userInfo:(id)arg3 error:(id*)arg4 ;
+(id)decodedObjectOfClass:(Class)arg1 fromPackage:(id)arg2 error:(id*)arg3 ;
+(id)decodedObjectOfClasses:(id)arg1 fromPackage:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)userInfo;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setPackage:(MSVSegmentedCodingPackage *)arg1 ;
-(MSVSegmentedCodingPackage *)package;
-(id)_coderForKey:(id)arg1 ;
-(void)msv_setUserInfo:(id)arg1 ;
-(id)msv_userInfo;
-(NSArray *)subcoders;
-(void)setSubcoders:(NSArray *)arg1 ;
-(id)initWithCodingPackage:(id)arg1 userInfo:(id)arg2 error:(id*)arg3 ;
-(id)decodeRootObjectOfClasses:(id)arg1 error:(id*)arg2 ;
-(id)initWithCodingPackage:(id)arg1 error:(id*)arg2 ;
-(Class)rootClass;
-(void)setRootClass:(Class)arg1 ;
@end

