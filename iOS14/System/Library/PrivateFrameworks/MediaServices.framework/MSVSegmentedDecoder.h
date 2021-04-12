/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)containsValueForKey:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)setPackage:(MSVSegmentedCodingPackage *)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(NSDictionary *)userInfo;
-(int)decodeInt32ForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(MSVSegmentedCodingPackage *)package;
-(NSArray *)subcoders;
-(id)_coderForKey:(id)arg1 ;
-(void)msv_setUserInfo:(id)arg1 ;
-(id)msv_userInfo;
-(void)setSubcoders:(NSArray *)arg1 ;
-(id)initWithCodingPackage:(id)arg1 userInfo:(id)arg2 error:(id*)arg3 ;
-(id)decodeRootObjectOfClasses:(id)arg1 error:(id*)arg2 ;
-(Class)rootClass;
-(id)initWithCodingPackage:(id)arg1 error:(id*)arg2 ;
-(void)setRootClass:(Class)arg1 ;
@end

