/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@interface asn1Token : NSObject {

	unsigned char mClass;
	unsigned long long mIdentifier;
	unsigned long long mLength;
	const char* mContent;

}

@property (readonly) unsigned char tokenClass; 
@property (readonly) unsigned long long identifier; 
@property (readonly) unsigned long long length; 
@property (readonly) const char* content; 
+(id)readTokenFromBuffer:(const char*)arg1 opaque:(BOOL)arg2 ;
+(id)readTokenFromBuffer:(const char*)arg1 ;
+(id)readOpaqueTokenFromBuffer:(const char*)arg1 ;
-(unsigned long long)length;
-(id)description;
-(unsigned long long)identifier;
-(const char*)content;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(BOOL)arg5 ;
-(unsigned char)tokenClass;
@end

