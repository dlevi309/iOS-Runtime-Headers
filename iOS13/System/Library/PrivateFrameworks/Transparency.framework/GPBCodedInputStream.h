/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


#import <Transparency/Transparency-Structs.h>
@class NSData;

@interface GPBCodedInputStream : NSObject {

	GPBCodedInputStreamState state_;
	NSData* buffer_;

}
+(id)streamWithData:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(BOOL)isAtEnd;
-(unsigned long long)position;
-(double)readDouble;
-(float)readFloat;
-(int)readInt32;
-(long long)readInt64;
-(unsigned)readFixed32;
-(unsigned long long)readFixed64;
-(id)readString;
-(BOOL)skipField:(int)arg1 ;
-(void)readMessage:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)skipMessage;
-(int)readTag;
-(void)checkLastTagWas:(int)arg1 ;
-(unsigned long long)pushLimit:(unsigned long long)arg1 ;
-(void)popLimit:(unsigned long long)arg1 ;
-(unsigned long long)readUInt64;
-(BOOL)readBool;
-(void)readGroup:(int)arg1 message:(id)arg2 extensionRegistry:(id)arg3 ;
-(void)readUnknownGroup:(int)arg1 message:(id)arg2 ;
-(void)readMapEntry:(id)arg1 extensionRegistry:(id)arg2 field:(id)arg3 parentMessage:(id)arg4 ;
-(id)readBytes;
-(unsigned)readUInt32;
-(int)readEnum;
-(int)readSFixed32;
-(long long)readSFixed64;
-(int)readSInt32;
-(long long)readSInt64;
@end

