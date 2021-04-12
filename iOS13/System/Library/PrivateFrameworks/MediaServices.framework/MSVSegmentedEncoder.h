/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <Foundation/NSCoder.h>

@protocol MSVSegmentedCoding;
@class MSVSegmentedCodingPackage, NSMutableDictionary, NSDictionary;

@interface MSVSegmentedEncoder : NSCoder {

	BOOL _hasFinished;
	MSVSegmentedCodingPackage* _package;
	id<MSVSegmentedCoding> _rootObject;
	NSMutableDictionary* _subcoders;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) BOOL hasFinished;                                 //@synthesize hasFinished=_hasFinished - In the implementation block
@property (nonatomic,retain) MSVSegmentedCodingPackage * package;              //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) id<MSVSegmentedCoding> rootObject;                //@synthesize rootObject=_rootObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subcoders;                  //@synthesize subcoders=_subcoders - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                            //@synthesize userInfo=_userInfo - In the implementation block
-(NSDictionary *)userInfo;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeRootObject:(id)arg1 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)finishEncoding;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setRootObject:(id<MSVSegmentedCoding>)arg1 ;
-(id<MSVSegmentedCoding>)rootObject;
-(void)setPackage:(MSVSegmentedCodingPackage *)arg1 ;
-(MSVSegmentedCodingPackage *)package;
-(id)initWithCodingPackage:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)hasFinished;
-(void)setHasFinished:(BOOL)arg1 ;
-(id)_coderForKey:(id)arg1 ;
-(void)msv_setUserInfo:(id)arg1 ;
-(id)initWithCodingPackage:(id)arg1 ;
-(id)msv_userInfo;
-(NSMutableDictionary *)subcoders;
-(void)setSubcoders:(NSMutableDictionary *)arg1 ;
@end

