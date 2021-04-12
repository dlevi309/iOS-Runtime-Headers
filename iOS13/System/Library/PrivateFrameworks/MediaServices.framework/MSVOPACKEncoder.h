/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <Foundation/NSCoder.h>
#import <libobjc.A.dylib/MSVSegmentedSubEncoder.h>

@class NSData, NSMutableArray, NSMapTable, NSDictionary, NSString;

@interface MSVOPACKEncoder : NSCoder <MSVSegmentedSubEncoder> {

	BOOL _hasFinished;
	NSData* _encodedData;
	NSMutableArray* _objects;
	NSMapTable* _objectLookupTable;
	NSMutableArray* _wrapperStack;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) BOOL hasFinished;                              //@synthesize hasFinished=_hasFinished - In the implementation block
@property (nonatomic,readonly) NSMutableArray * objects;                    //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NSMapTable * objectLookupTable;              //@synthesize objectLookupTable=_objectLookupTable - In the implementation block
@property (nonatomic,readonly) NSMutableArray * wrapperStack;               //@synthesize wrapperStack=_wrapperStack - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSData * encodedData;                        //@synthesize encodedData=_encodedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasTopLevelData; 
+(id)encodedDataWithRootObject:(id)arg1 error:(id*)arg2 ;
+(id)encodedDataWithRootObject:(id)arg1 userInfo:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(NSDictionary *)userInfo;
-(BOOL)allowsKeyedCoding;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeRootObject:(id)arg1 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(BOOL)requiresSecureCoding;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(NSData *)encodedData;
-(void)finishEncoding;
-(NSMutableArray *)objects;
-(BOOL)hasFinished;
-(void)finishEncodingPartialTopLevelObject;
-(void)setHasFinished:(BOOL)arg1 ;
-(void)msv_setUserInfo:(id)arg1 ;
-(void)beginEncodingPartialTopLevelObject:(id)arg1 ;
-(id)msv_userInfo;
-(BOOL)hasTopLevelData;
-(id)encodedDataWithError:(id*)arg1 ;
-(void)finishEncodingWithError:(id*)arg1 ;
-(id)_convertObject:(id)arg1 ;
-(void)_encodeNumber:(id)arg1 forKey:(id)arg2 ;
-(id)_convertNumber:(id)arg1 ;
-(NSMapTable *)objectLookupTable;
-(NSMutableArray *)wrapperStack;
@end

