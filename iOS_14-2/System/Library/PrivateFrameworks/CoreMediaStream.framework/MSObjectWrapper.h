/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@protocol NSObjectNSCoding;
@interface MSObjectWrapper : NSObject {

	long long _size;
	long long _uniqueID;
	id<NSObject><NSCoding> _object;
	int _errorCount;

}

@property (assign,nonatomic) long long size;                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long uniqueID;                 //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) id<NSCoding> object;              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) int errorCount;                     //@synthesize errorCount=_errorCount - In the implementation block
+(id)wrapperWithObject:(id)arg1 size:(long long)arg2 ;
+(long long)indexOfObject:(id)arg1 inWrapperArray:(id)arg2 ;
+(id)objectsFromWrappers:(id)arg1 ;
+(id)objectsFromWrappers:(id)arg1 equalToObject:(id)arg2 ;
-(void)setUniqueID:(long long)arg1 ;
-(long long)uniqueID;
-(long long)size;
-(void)setSize:(long long)arg1 ;
-(id<NSCoding>)object;
-(int)errorCount;
-(void)setErrorCount:(int)arg1 ;
-(id)initWithObject:(id)arg1 size:(long long)arg2 ;
@end

