/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<NSCoding>)object;
-(long long)size;
-(long long)uniqueID;
-(void)setSize:(long long)arg1 ;
-(int)errorCount;
-(void)setErrorCount:(int)arg1 ;
-(void)setUniqueID:(long long)arg1 ;
-(id)initWithObject:(id)arg1 size:(long long)arg2 ;
@end

