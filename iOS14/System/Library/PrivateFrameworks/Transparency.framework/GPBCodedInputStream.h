/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


#import <Transparency/Transparency-Structs.h>
@class NSData;

@interface GPBCodedInputStream : NSObject {

	GPBCodedInputStreamState state_;
	NSData* buffer_;

}
+(id)streamWithData:(id)arg1 ;
-(unsigned long long)position;
-(int)readEnum;
-(BOOL)skipField:(int)arg1 ;
-(id)readString;
-(void)readUnknownGroup:(int)arg1 message:(id)arg2 ;
-(long long)readInt64;
-(id)readBytes;
-(id)initWithData:(id)arg1 ;
-(void)readGroup:(int)arg1 message:(id)arg2 extensionRegistry:(id)arg3 ;
-(void)readMapEntry:(id)arg1 extensionRegistry:(id)arg2 field:(id)arg3 parentMessage:(id)arg4 ;
-(void)popLimit:(unsigned long long)arg1 ;
-(long long)readSFixed64;
-(int)readSFixed32;
-(unsigned long long)readUInt64;
-(double)readDouble;
-(void)skipMessage;
-(unsigned)readFixed32;
-(void)readMessage:(id)arg1 extensionRegistry:(id)arg2 ;
-(int)readTag;
-(BOOL)readBool;
-(float)readFloat;
-(int)readInt32;
-(unsigned)readUInt32;
-(int)readSInt32;
-(void)checkLastTagWas:(int)arg1 ;
-(unsigned long long)readFixed64;
-(BOOL)isAtEnd;
-(void)dealloc;
-(unsigned long long)pushLimit:(unsigned long long)arg1 ;
-(long long)readSInt64;
@end

