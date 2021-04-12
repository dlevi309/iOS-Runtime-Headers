/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(void)dealloc;
-(id)debugDescription;
-(char*)bytes;
-(unsigned long long)nsEncoding;
-(unsigned)cfEncoding;
-(unsigned long long)bytesLength;
@end

