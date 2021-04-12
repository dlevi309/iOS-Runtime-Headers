/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
*/


@interface ASFAsn1Token : NSObject {

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
-(const char*)content;
-(unsigned long long)length;
-(id)description;
-(unsigned char)tokenClass;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(BOOL)arg5 ;
-(unsigned long long)identifier;
@end

