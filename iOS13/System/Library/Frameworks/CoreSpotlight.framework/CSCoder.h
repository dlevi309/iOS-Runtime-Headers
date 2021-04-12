/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(MDPlistContainerRef)container;
-(NSData *)data;
-(void)encodeObject:(id)arg1 ;
-(void)encodeBool:(BOOL)arg1 ;
-(void)encodeString:(const char*)arg1 ;
-(void)beginType:(const char*)arg1 ;
-(void)encodeInt32:(int)arg1 ;
-(void)beginDictionary;
-(void)encodeString:(const char*)arg1 length:(long long)arg2 ;
-(void)encodeMDPlistObject:(SCD_Struct_CS3)arg1 ;
-(void)endDictionary;
-(void)endType;
-(void)encodeInt64:(long long)arg1 ;
-(void)encodeData:(const void*)arg1 length:(long long)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(const char*)arg2 keyLength:(long long)arg3 ;
-(void)encodeString:(const char*)arg1 stringLength:(long long)arg2 forKey:(const char*)arg3 keyLength:(long long)arg4 ;
-(void)encodeNSString:(id)arg1 ;
-(void)beginArray;
-(void)endArray;
-(BOOL)finalized;
@end

