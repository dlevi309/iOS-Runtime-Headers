/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString;

@interface NSEncodingDetectionPlaceholder : NSObject {

	unsigned long long nsEncoding;
	unsigned cfEncoding;
	NSString* string;
	char* bytes;
	unsigned long long bytesLength;
	char* bytesStart;

}

@property (readonly) unsigned long long nsEncoding; 
@property (readonly) unsigned cfEncoding; 
@property (readonly) NSString * string; 
@property (readonly) char* bytes; 
@property (readonly) unsigned long long bytesLength; 
+(id)placeholderForDetector:(id)arg1 ;
-(unsigned long long)bytesLength;
-(unsigned long long)nsEncoding;
-(unsigned)cfEncoding;
-(char*)bytes;
-(id)debugDescription;
-(NSString *)string;
-(void)dealloc;
@end

