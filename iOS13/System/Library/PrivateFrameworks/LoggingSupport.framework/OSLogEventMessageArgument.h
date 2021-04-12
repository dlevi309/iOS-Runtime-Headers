/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class OSLogEventDecomposedMessage, NSObject;

@interface OSLogEventMessageArgument : NSObject {

	OSLogEventDecomposedMessage* _decomposedMessage;
	os_log_fmt_raw_placeholder* _rawArg;
	unsigned long long _sizeofLong;

}

@property (nonatomic,readonly) unsigned long long availability; 
@property (nonatomic,readonly) unsigned long long privacy; 
@property (nonatomic,readonly) unsigned long long category; 
@property (nonatomic,readonly) unsigned long long scalarCategory; 
@property (nonatomic,readonly) unsigned long long scalarType; 
@property (nonatomic,readonly) NSObject * objectRepresentation; 
@property (nonatomic,readonly) const void* rawBytes; 
@property (nonatomic,readonly) unsigned short rawBytesLength; 
@property (nonatomic,readonly) unsigned long long unsignedInt64Value; 
@property (nonatomic,readonly) long long int64Value; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,readonly) D longDoubleValue; 
-(double)doubleValue;
-(unsigned long long)category;
-(long long)int64Value;
-(const void*)rawBytes;
-(unsigned long long)availability;
-(NSObject *)objectRepresentation;
-(id)initWithProxy:(id)arg1 index:(unsigned long long)arg2 ;
-(unsigned long long)privacy;
-(unsigned short)rawBytesLength;
-(unsigned long long)scalarCategory;
-(unsigned long long)scalarType;
-(unsigned long long)unsignedInt64Value;
-(D)longDoubleValue;
@end

