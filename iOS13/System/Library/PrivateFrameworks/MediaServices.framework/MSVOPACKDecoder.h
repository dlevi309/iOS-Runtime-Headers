/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)decodedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)decodedObjectOfClass:(Class)arg1 fromData:(id)arg2 userInfo:(id)arg3 error:(id*)arg4 ;
+(id)decodedObjectOfClasses:(id)arg1 fromData:(id)arg2 userInfo:(id)arg3 error:(id*)arg4 ;
+(id)decodedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)userInfo;
-(BOOL)allowsKeyedCoding;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(BOOL)requiresSecureCoding;
-(float)decodeFloatForKey:(id)arg1 ;
-(id)initForReadingFromData:(id)arg1 error:(id*)arg2 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSArray *)objects;
-(void)msv_setUserInfo:(id)arg1 ;
-(id)msv_userInfo;
-(id)decodeRootObjectOfClasses:(id)arg1 error:(id*)arg2 ;
-(void)beginDecodingPartialTopLevelObjectOfClasses:(id)arg1 ;
-(void)finishDecodingPartialTopLevelObject;
-(NSMapTable *)objectLookupTable;
-(NSMutableArray *)wrapperStack;
-(id)initForReadingFromData:(id)arg1 userInfo:(id)arg2 error:(id*)arg3 ;
-(id)_decodeOPACKObject:(id)arg1 ofClasses:(id)arg2 ;
-(void)_validateClass:(Class)arg1 fromSupportedClasses:(id)arg2 ;
-(id)_decodeNumberForKey:(id)arg1 ;
@end

