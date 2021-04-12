/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <Foundation/NSCoder.h>
#import <libobjc.A.dylib/MSVSegmentedSubDecoder.h>

@class NSArray, NSMapTable, NSMutableArray, NSDictionary, NSString;

@interface MSVOPACKDecoder : NSCoder <MSVSegmentedSubDecoder> {

	NSArray* _objects;
	NSMapTable* _objectLookupTable;
	NSMutableArray* _wrapperStack;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) NSArray * objects;                           //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NSMapTable * objectLookupTable;              //@synthesize objectLookupTable=_objectLookupTable - In the implementation block
@property (nonatomic,readonly) NSMutableArray * wrapperStack;               //@synthesize wrapperStack=_wrapperStack - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decodedObjectOfClass:(Class)arg1 fromData:(id)arg2 userInfo:(id)arg3 error:(id*)arg4 ;
+(id)decodedObjectOfClasses:(id)arg1 fromData:(id)arg2 userInfo:(id)arg3 error:(id*)arg4 ;
+(id)decodedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)decodedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3 ;
-(NSArray *)objects;
-(BOOL)containsValueForKey:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(NSDictionary *)userInfo;
-(NSMapTable *)objectLookupTable;
-(NSMutableArray *)wrapperStack;
-(id)initForReadingFromData:(id)arg1 userInfo:(id)arg2 error:(id*)arg3 ;
-(id)_decodeOPACKObject:(id)arg1 ofClasses:(id)arg2 ;
-(void)_validateClass:(Class)arg1 fromSupportedClasses:(id)arg2 ;
-(id)_decodeNumberForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(id)initForReadingFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)requiresSecureCoding;
-(BOOL)allowsKeyedCoding;
-(void)msv_setUserInfo:(id)arg1 ;
-(id)msv_userInfo;
-(id)decodeRootObjectOfClasses:(id)arg1 error:(id*)arg2 ;
-(void)beginDecodingPartialTopLevelObjectOfClasses:(id)arg1 ;
-(void)finishDecodingPartialTopLevelObject;
@end

