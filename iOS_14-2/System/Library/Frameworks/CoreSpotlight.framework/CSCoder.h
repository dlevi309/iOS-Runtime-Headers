/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSCoderData.h>

@class NSData;

@interface CSCoder : NSObject <CSCoderData> {

	BOOL _finalized;
	NSData* _data;
	MDPlistContainerRef _container;

}

@property (nonatomic,readonly) MDPlistContainerRef container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) BOOL finalized;                             //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,readonly) NSData * data;                              //@synthesize data=_data - In the implementation block
-(void)endDictionary;
-(void)encodeDouble:(double)arg1 ;
-(void)beginArray;
-(id)init;
-(void)endType;
-(void)encodeMDPlistObject:(SCD_Struct_CS3)arg1 ;
-(void)encodeObject:(id)arg1 ;
-(void)encodeBool:(BOOL)arg1 ;
-(BOOL)finalized;
-(void)beginType:(const char*)arg1 ;
-(NSData *)data;
-(void)encodeString:(const char*)arg1 stringLength:(long long)arg2 forKey:(const char*)arg3 keyLength:(long long)arg4 ;
-(void)encodeString:(const char*)arg1 ;
-(void)encodeInt64:(long long)arg1 ;
-(void)encodeNSString:(id)arg1 ;
-(void)encodeString:(const char*)arg1 length:(long long)arg2 ;
-(void)beginDictionary;
-(void)encodeObject:(id)arg1 forKey:(const char*)arg2 keyLength:(long long)arg3 ;
-(void)encodeData:(const void*)arg1 length:(long long)arg2 ;
-(MDPlistContainerRef)container;
-(const MDPlistContainerRef)plistContainer;
-(void)endArray;
-(void)encodeInt32:(int)arg1 ;
-(void)dealloc;
@end

