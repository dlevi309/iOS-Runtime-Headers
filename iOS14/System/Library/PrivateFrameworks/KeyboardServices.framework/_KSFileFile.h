/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)contents;
-(id)initWithURL:(id)arg1 ;
-(void)consistencyCheck;
-(unsigned long long)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)lastModified;
-(id)description;
-(id)URL;
-(id)initWithCoder:(id)arg1 ;
-(void)saveTo:(id)arg1 ;
-(void)restoreToPath:(id)arg1 ;
-(void)loadAttributesFromURL:(id)arg1 ;
-(void)saveAttributesToURL:(id)arg1 ;
@end

