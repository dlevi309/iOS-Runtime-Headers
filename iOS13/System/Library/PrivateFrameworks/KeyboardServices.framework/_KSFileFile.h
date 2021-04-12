/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <KeyboardServices/_KSFileEntry.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/_KSBlobSaver.h>

@class NSURL, NSDate;

@interface _KSFileFile : _KSFileEntry <NSSecureCoding, _KSBlobSaver> {

	int _protectionClass;
	NSURL* _url;
	NSDate* _lastModified;
	unsigned long long _offset;
	unsigned long long _size;

}
+(BOOL)supportsSecureCoding;
+(int)protectionFromURL:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)size;
-(id)contents;
-(id)URL;
-(id)lastModified;
-(void)consistencyCheck;
-(void)restoreToPath:(id)arg1 ;
-(void)loadAttributesFromURL:(id)arg1 ;
-(void)saveAttributesToURL:(id)arg1 ;
-(void)saveTo:(id)arg1 ;
@end

